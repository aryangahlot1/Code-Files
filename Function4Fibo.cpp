#include<iostream>
using namespace std;
int fibon(int n) {
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<=n;i++) {
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main() {
int n;
cin>>n;
cout<<"The term is "<<fibon(n)<<endl;
return 0;
}