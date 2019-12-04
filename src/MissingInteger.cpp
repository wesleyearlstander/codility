// Accessible from https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N) or O(N * log(N))
//
int solution(vector<int> &A) {
    const int maxSize = 1000001;
    vector<bool> found(maxSize); // 0 to 1,000,000 - all positive integers
    
    unsigned int n = A.size();
    for (int i = 0; i < n; ++i) 
        if (A[i] > 0) 
            found[A[i]] = true;
    
    for (int i = 1; i < maxSize; ++i)
        if (!found[i]) return i;
    
    return 0;
}