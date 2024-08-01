#include<iostream>
using namespace std;
int movezero(int arr[],int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n[5]={1,0,2,0,3};
    movezero(n,5);
    printarray(n,5);
}