// Accessible from https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(1)

int solution(int X, int Y, int D) {
    int distance = Y- X;
    if (distance % D == 0) return distance/D;
    else return distance/D + 1;
}