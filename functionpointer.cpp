#include<iostream>
using namespace std;
int print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
int update(int *p){
    *p=*p+1;    
}
int main(){
    int n=5;
    int *ptr=&n;
    print(ptr);
    cout<<"before:"<<*ptr<<endl;
    update(ptr);
    cout<<"after:"<<*ptr<<endl; 
}