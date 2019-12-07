// Accessible from https://app.codility.com/programmers/lessons/5-prefix_sums/min_avg_two_slice/
//
// Task Score: 80%
// Correctness: 100%
// Performance: 60%
// Detected Time Complexity: O(N)
//
#include <limits>
double average (int p, int q, int sum) {
    return (double)sum / (double(q) - double(p) + 1);
}

int solution(vector<int> &A) {
    unsigned int n = A.size();
    vector<int> prefixSum(n + 1, 0);
    prefixSum[0] = A[0];
    for (unsigned int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i-1] + A[i];
    }
    double minAvg = std::numeric_limits<double>::max();
    int index = 0;
    for (unsigned int i = 1; i <= n; i++) {
        double avg;
        if (i+1 < n) {
            avg = average(i, i+1, prefixSum[i+1] - prefixSum[i-1]);
            if (avg < minAvg) {
                minAvg = avg;
                index = i;
            }
        }
        if (i+2 < n) {
            avg = average(i, i+2, prefixSum[i+2] - prefixSum[i-1]);
            if (avg < minAvg) {
                minAvg = avg;
                index = i;
            }
        }
    }
    double avg;
    avg = average(0, 1, prefixSum[1]);
    if (avg < minAvg) {
        index = 0;
    }
    avg = average(0, 2, prefixSum[2]);
    if (avg < minAvg) {
        index = 0;
    }
    return index;
}