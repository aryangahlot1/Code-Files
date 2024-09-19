#include<iostream>
using namespace std;
int main() {
    int num[100];
    fill_n(num,100,3);
    for(int i=0;i<=10;i++) {
    cout<<num[i]<<endl;
    }
}