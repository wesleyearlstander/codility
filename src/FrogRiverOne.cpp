// Accessible from https://app.codility.com/programmers/lessons/4-counting_elements/frog_river_one/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N)
//
int solution(int X, vector<int> &A) {
    unsigned int n = A.size();
    if (n == 1) if (A[0] == 1) return 0;
    
    bool leaves[X+1] = {0};
    unsigned int total = X * (X+1) / 2; // total of leaves positions
    unsigned int sum = 0;
    
    for (unsigned int i = 0; i < n; ++i) {
        if (!leaves[A[i]]) {
            leaves[A[i]] = true;
            sum += A[i];
        }
        if (sum == total) return i;
    }
    return -1;
}