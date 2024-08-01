#include<iostream>
using namespace std;
int getpivot(int arr[],int size){
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
int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int getposition(int arr[],int size,int key){
    int pivot=getpivot(arr,5);
    if(key>=arr[pivot] && key<=arr[size-1]){
        return binarysearch(arr,pivot,size-1,key);
    }
    else{
        return binarysearch(arr,0,pivot-1,key);
        
    }
}
int main(){
    int n[5]={7,9,1,2,3};
    int key=2;
    int position=getposition(n,5,key);
    cout<<position;
}