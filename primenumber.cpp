#include<iostream>
using namespace std;
int main(){
   int n=5;
   int i=2;
   while(i<n){
    if(n%i!=0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    i++;
   } 
}