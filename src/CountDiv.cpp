// Accessible from https://app.codility.com/programmers/lessons/5-prefix_sums/count_div/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(1)
//
int solution(int A, int B, int K) {
    return B/K - A/K + !(A%K);
}

int solutionBrute(int A, int B, int K) {
    int count = 0;
    for (int i = A; i <= B; ++i) {
        if (i % K == 0) count ++;
    }
    return count;
}