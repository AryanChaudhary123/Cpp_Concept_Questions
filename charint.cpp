#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[5]={'a','b','c','d','e'};
    cout<<arr<<endl;
    cout<<ch<<endl;
    char *ptr=&ch[0];
    cout<<ptr<<endl;
}