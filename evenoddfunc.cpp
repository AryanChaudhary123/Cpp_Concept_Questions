#include<iostream>
using namespace std;
int evenodd(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){
    int n=10;
    evenodd(n);
}