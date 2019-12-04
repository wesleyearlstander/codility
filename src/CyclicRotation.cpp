// Accessible from https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/
//
// Task Score: 100%
// Correctness: 100%
//
vector<int> rotateRight(vector<int> &A) {
    int carry = A[0];
    for (unsigned int i = 1; i < A.size(); i++) {
        int temp = A[i];
        A[i] = carry;
        carry = temp;
    }
    A[0] = carry;
    return A;
}

vector<int> solution(vector<int> &A, int K) {
    if (A.size() <= 1) return A;
    for (int i = 0; i < K; i++) {
        A = rotateRight(A);
    }
    return A;
}