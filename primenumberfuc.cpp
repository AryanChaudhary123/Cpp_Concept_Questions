#include<iostream>
using namespace std;
prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    int n=7;
    prime(n);
    if(prime(n)){
        cout<<"is a prime";
    }
    else{
        cout<<"not a prime";
    }
}