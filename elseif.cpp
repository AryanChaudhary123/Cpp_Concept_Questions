#include<iostream>
using namespace std;
int main(){
    char ch='1';
    if(ch>='a' && ch<='z'){
        cout<<"lower case";
    }
    else if(ch>='A' && ch<= 'Z'){
        cout<<"Upper case";
    }
    else{
        cout<<"numeric";
    }
}