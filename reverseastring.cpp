#include<iostream>
using namespace std;
void reverse(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
    swap(ch[start],ch[end]);
    start++;
    end--;
}
}
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
    char ch[20]="aryan";
    cout<<"original: "<<ch<<endl;
    int len=getlength(ch);
    reverse(ch,len);
    cout<<"reversed: "<<ch<<endl;
}