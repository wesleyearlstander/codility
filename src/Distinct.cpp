// Accessible from https://app.codility.com/programmers/lessons/6-sorting/distinct/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N * log(N))
//
#include <bits/stdc++.h> 
int solution(vector<int> &A) {
    int n = A.size();
    if (n == 0) return 0;
    else if (n == 1) return 1;
    sort(A.begin(), A.end());
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (A[i] != A[i-1]) count++;
    }
    return count;
}