// Accessible from https://app.codility.com/programmers/lessons/4-counting_elements/perm_check/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N) or O(N * log(N))
//
#include <bits/stdc++.h> 
int solution(vector<int> &A) {
    
    if (A.size() == 1) if (A[0] != 1) return 0; 
    
    sort(A.begin(), A.end());
    
    int done = A.size();
    for (int i = 1; i <= done; ++i){
        if (A[i-1] != i) {
            return 0;
        }
    }
    return 1;
}