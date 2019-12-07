// Accessible from https://app.codility.com/programmers/lessons/6-sorting/max_product_of_three/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N * log(N))
//
#include <bits/stdc++.h> 
int solution(vector<int> &A) {
    sort(A.begin(), A.end()); 
    int n = A.size();
    int biggest = A[n-1] * A[n-2] * A[n-3];
    int other = A[0] * A[1] * A[n-1];
    return (biggest > other) ? biggest : other;
} 