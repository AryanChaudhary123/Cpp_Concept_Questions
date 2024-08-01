#include<iostream>
using namespace std;
long long int binarysearch(int n){
    int start=0;
    int end=n;
    long long int mid=start+(end-start)/2;
    long long int ans=-1;
    while(start<=end){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int mySqrt(int x) {
    return binarysearch(x);
}
double precious(int x,int precision, int integer_part){
    double factor=1;
    double ans=integer_part;
    for(int i=0;i=precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<x;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n=36;
    int integer_part=mySqrt(n);
    int perfect_ans=precious(n,3,integer_part);
    cout<<"Required square root is:"<<perfect_ans<<endl;
}