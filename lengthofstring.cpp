#include<iostream>
using namespace std;
int getlength(char ch[]){
    int i=0;
    int count=0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    char ch[20]="Aryan";
    cout<<"length: "<<getlength(ch)<<endl;
}