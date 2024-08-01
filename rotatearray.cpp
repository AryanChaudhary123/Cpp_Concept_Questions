#include <iostream>
#include <vector>
using namespace std;

void rotatearray(int nums[], int size, int k) {
    vector<int> temp(size);
    for (int i = 0; i < size; ++i) {
        temp[(i + k) % size] = nums[i];
    }
    for (int i = 0; i < size; ++i) {
        nums[i] = temp[i];
    }
}

void printarray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n[6] = {1, 2, 3, 4, 5, 6};
    int key = 2;
    rotatearray(n, 6, key);
    printarray(n, 6);
    return 0;
}
