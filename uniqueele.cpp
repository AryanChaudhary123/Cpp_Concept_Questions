#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n[5]={1,2,1,3,2};
    int unique_ele=unique(n,5);
    cout<<unique_ele;
}