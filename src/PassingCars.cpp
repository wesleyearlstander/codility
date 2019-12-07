// Accessible from https://app.codility.com/programmers/lessons/5-prefix_sums/passing_cars/
// 
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N)
//
int solution(vector<int> &A) {
    int out = 0;
    int n = A.size();
    int multiply = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] == 0){
            multiply++;
        }
        if (multiply > 0) {
            if (A[i] == 1) {
                out += multiply;
                if (out > 1000000000) {
                    return -1;
                }
            }
        }
    }
    
    return out;
}