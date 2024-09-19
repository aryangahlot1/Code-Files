#include<iostream>
using namespace std;
int AP(int n) {
    int term=(3*n)+7;
    return term;
}
int main() {
int n;
cin>>n;
cout<<"The Nth term is "<<AP(n)<<endl;
return 0;
}