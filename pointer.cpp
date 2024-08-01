#include<iostream>
using namespace std;
int main(){
    int n=565;
    cout<<&n<<endl;
    cout<<n<<endl;
    n++;
    int *ptr=&n;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(*ptr)<<endl;
}