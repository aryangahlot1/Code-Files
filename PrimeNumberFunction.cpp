#include<iostream>
using namespace std;
bool isprime(int n) {
    
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int a;
    cin>>a;
    if(isprime(a)) {
        cout<<"Prime"<<endl;
    }
    else {
    cout<<"Not Prime"<<endl;
    }
}