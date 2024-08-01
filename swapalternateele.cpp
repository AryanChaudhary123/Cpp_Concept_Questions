#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void swaparray(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n[6]={1,2,3,4,5,6};
    swaparray(n,6);
    printarray(n,6);
}
