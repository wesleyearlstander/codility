// Accessible from https://app.codility.com/programmers/lessons/4-counting_elements/max_counters/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N + M)
//
vector<int> solution(int N, vector<int> &A) {
    vector<int> out(N);

    int maxCount = 0;
    int maxIndex = -1;
    int maxValue = -1;
    
    unsigned int n = A.size();
    for (unsigned int i = 0; i < n; ++i) {
        if (A[i] <= N && A[i] >= 1) {
            if (out[A[i]-1] < maxValue) out[A[i]-1] = maxValue;
            out[A[i]-1]++;
            if (out[A[i]-1] > maxCount) maxCount = out[A[i]-1];
        } else if (A[i] == N + 1) {
            maxIndex = i;
            maxValue = maxCount;
        }
    }
    if (maxIndex != -1) {
        out = vector<int>(N, maxValue);
        for (unsigned int i = maxIndex + 1; i < n; ++i) 
            if (A[i] <= N && A[i] >= 1) 
                out[A[i]-1]++;
    }
    return out;
}