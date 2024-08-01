#include<iostream>
using namespace std;
int getmax(int arr[],int size){
    int max = INT32_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int size){
    int min = INT32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int a[5]={10,33,5,53,765};
    cout<<"Maximum Value:"<<getmax(a,5)<<endl;
    cout<<"Minimum Value:"<<getmin(a,5)<<endl;
}