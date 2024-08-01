#include<iostream>
using namespace std;
printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
int main(){
    int a[10]={1,23};
    printarray(a,10);

    int b[5]={1,2,3,4,5};
    printarray(b,5);

    int aryan[100];

    int size=sizeof(aryan)/sizeof(int);
    cout<<size<<endl;

    char ch[5]={'a','r','y','a','n'};
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
        
    }
}