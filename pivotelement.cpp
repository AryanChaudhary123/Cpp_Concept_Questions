#include<iostream>
using namespace std;
getpivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
    
}
int main(){
    int n[5]={5,8,1,4,6};
    int pivot_element=getpivot(n,5);
    cout<<"Pivot Element is at index: "<<pivot_element<<endl;
}