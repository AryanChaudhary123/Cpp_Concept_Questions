#include<iostream>
using namespace std;
firstoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<end){
        if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
}
return ans;
}
lastoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<end){
        if(arr[mid]==key){
        ans=mid;
        start=mid+1;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
}
return ans;
}
int main(){
    int n[5]={1,2,3,3,4};
    int key=3;
    int firstindex=firstoccurence(n,5,key);
    cout<<key<<" "<<"first occured at index:"<<firstindex<<endl;
    int Secondindex=lastoccurence(n,5,key);
    cout<<key<<" "<<"last occured at index:"<<Secondindex<<endl;
}