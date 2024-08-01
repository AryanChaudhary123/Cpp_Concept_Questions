#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    int temp;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n[6]={1,2,3,4,5,6};
    reverse(n,6);
    printarray(n,6);
}