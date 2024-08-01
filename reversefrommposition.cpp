#include<iostream>
using namespace std;
int reverse(int arr[],int size,int key){
    int start=key+1;
    int end=size-1;
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
    int m[5]={10,9,8,7,6};
    int key=2;
    reverse(m,5,key);
    printarray(m,5);
}