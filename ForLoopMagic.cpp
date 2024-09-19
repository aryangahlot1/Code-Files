#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number"<< endl;
    cin>>n;

    cout<<"Count from 1 to n"<<endl;
    int i=1;
    for( ; ; ) {
        if(i<=n){
        cout<<i<<endl;}
        else
        {
            break;
        }
        i++;
    } 
}