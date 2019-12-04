// Accessible from https://app.codility.com/programmers/lessons/1-iterations/binary_gap/
//
// Task Score: 100%
// Correctness: 100%
//
int solution(int N) {
    while (N && !(N & 1u)) N >>= 1;
    int answer = 0;
    while (true) {
        while (N & 1) {
            N >>= 1;
        }
        if (!N) return answer;
        int count = 0;
        while (!(N & 1)) {
            ++count;
            N >>= 1;
        }
        if (count > answer) {
            answer = count;
        }
    }
}