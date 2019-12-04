// Accessible from https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N) or O(N * log(N))
int solution(vector<int> &A) {
    if (A.size() == 1) return A[0]; //array size 1 check
    int out = 0;
    for (unsigned int i = 0; i < A.size(); i++) out ^= A[i];
    return out;
}