// Accessible from https://app.codility.com/programmers/lessons/5-prefix_sums/genomic_range_query/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected Time Complexity: O(N + M)
//
int value (char s) {
    switch (s) {
        case 'A': return 0;
        case 'C': return 1;
        case 'G': return 2;
        default: return 3;
    }
}

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    unsigned int n = S.size();
    vector<vector<int>> sums;
    for (int i = 0; i < 4; ++i) { //4 different values
        sums.push_back(vector<int>(n+1,0));
    }

    for (unsigned int i = 1; i <= n; ++i) { //prefix sums
        for (int j = 0; j < 4; ++j) {
            sums[j][i] = sums[j][i-1] + (value(S[i-1]) == j ? 1 : 0);
        }
    }

    vector<int> result;
    n = P.size();
    for (unsigned int i = 0; i < n; ++i) {
        int from = P[i];
        int to = Q[i] + 1; //+1 to account for to == from
        for (int j = 0; j < 4; ++j) {
            if (sums[j][to]-sums[j][from]!=0) {
                result.push_back(j+1); //add 1 to index to get value
                break;
            }
        }
    }
    return result;
}