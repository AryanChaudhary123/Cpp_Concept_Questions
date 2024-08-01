#include<iostream>
using namespace std;
int ans=1;
int power(int x,int y){
    for(int i=1;i<=y;i++){
        ans=ans*x;
        
    }
    return ans;
}
int main(){
    int x=2;
    int y=10;
    power(x,y);
    cout<<ans<<endl;
}