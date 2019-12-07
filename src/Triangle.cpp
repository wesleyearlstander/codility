// Accessible from https://app.codility.com/programmers/lessons/6-sorting/triangle/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N * log(N))
//
#include <bits/stdc++.h> 
int solution(vector<int> &A) {
    if (A.size() < 3) return 0;
    sort(A.begin(), A.end());
    for (unsigned int i = 0; i < A.size()-2; ++i) {
        long long t0 = A[i];
        long long t1 =  A[i+1];
        long long t2 = A[i+2];
        if (t0 + t1 > t2) return 1;
    }
    return 0;
}