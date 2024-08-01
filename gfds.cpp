#include <iostream>
using namespace std;
void mergeArrays(int ARR1[], int M, int ARR2[], int N) {
    int i = M - 1; 
    int j = N - 1;  
    int k = M + N - 1; 
    while (i >= 0 && j >= 0) {
        if (ARR1[i] > ARR2[j]) {
            ARR1[k] = ARR1[i];
            i--;
        } else {
            ARR1[k] = ARR2[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        ARR1[k] = ARR2[j];
        j--;
        k--;
    }
}


int main() {
    int ARR1[10] = {1, 3, 5, 7, 9};  // Assume the remaining space is initialized to 0 or some placeholder
    int ARR2[] = {2, 4, 6, 8, 10};
    int M = 5;  // Number of actual elements in ARR1
    int N = 5;  // Number of elements in ARR2

    mergeArrays(ARR1, M, ARR2, N);

    for (int i = 0; i < M + N; i++) {
        cout << ARR1[i] << " ";
    }

    return 0;
}
