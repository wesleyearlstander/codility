// Accessible from https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N) or O(N * log(N))

int solution(vector<int> &A) {
    unsigned int n = A.size() + 1;
    long long int estimated = n * (n + 1) / 2;
    long long int total = 0;
    for (unsigned int i = 0; i < n-1; i++) total += A[i];
    return estimated - total;
}