#include<iostream>
using namespace std;
int main() {
    int amount;
    int R100,R50,R20,R1;
    cout<<"Enter the amount"<<endl;
    cin>>amount;

    switch(1) {
        case 1: 
        R100=amount/100;
        amount=amount%100;
        cout<<"100 Rupee Notes required are:"<<R100<<endl;

        case 2:
        R50=amount/50;
        amount=amount%50;
        cout<<"50 Rupee Notes required are:"<<R50<<endl; 

        case 3:
        R20=amount/20;
        amount=amount%20;
        cout<<"20 Rupee Notes required are:"<<R20<<endl;

        case 4:
        R1=amount/1;
        amount=amount%1;
        cout<<"1 Rupee Notes required are:"<<R1<<endl;
    }
    return 0;
}