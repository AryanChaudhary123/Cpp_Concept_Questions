#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *num = new int[n];  // Allocate memory for n integers
    for(int i = 0; i < n; i++){
        cin >> num[i];  // Read input into the array
    }
    for(int i = 0; i < n; i++){
        cout << num[i] << endl;  // Print the values
    }
    delete[] num;  // Free the allocated memory
    return 0;
}
