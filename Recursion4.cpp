#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==0)
    return n;
    else
    return fibo(n-1)+fibo(n-2);
}
int main() {
    for( int i=1;i<=5;i++){
        int c=fibo(i);
        cout<<c<<" ";
    }
    return 0;
}
