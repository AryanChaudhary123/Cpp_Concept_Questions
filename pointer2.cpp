#include<iostream>
using namespace std;
int main(){
    int n=5;
    int *ptr=&n;
    int a=*ptr;
    a++;
    (*ptr)++;
    cout<<ptr<<endl;
    cout<<n<<endl;
    //copying a pointer
    int *q=ptr;
    cout<<q<<endl;
    cout<<*q<<endl;
}