// Accessible from https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N)

#include <stdlib.h>

int solution(vector<int> &A) {
    
    int leftSum = 0;
    int rightSum = 0;
    int ans = 0;
    int n = A.size();
    
    for (int i = 1; i < n; i++) 
        rightSum += A[i];
        
    leftSum = A[0];
    ans = abs(leftSum - rightSum);
    
    for (int i = 1; i < n; i++) {
        if (abs(leftSum - rightSum) < ans)
            ans = abs(leftSum - rightSum);
        leftSum += A[i];
        rightSum -= A[i];
    }
    
    return ans;
}