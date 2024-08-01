#include<iostream>
using namespace std;
int merge(int arr1[],int size1,int arr2[],int size2, int ans[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            k++;
            i++;
        }
        else{
            ans[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<size1){
        ans[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2){
        ans[k]=arr2[j];
        k++;
        j++;
    }
}
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n[5]={1,2,3,4,5};
    int m[3]={6,7,8};
    int ans[8]={0};
    merge(n,5,m,3,ans);
    printarray(ans,8);
}