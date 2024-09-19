#include<bits/stdc++.h>
using namespace std;

void nameofmy(int i, int n){
   if(i>n) return;
   cout<<"Aryan"<<endl;
   func(i+1,n);
}
int main(){
  int n = 5;
  nameofmy(1,n);
  return 0;
}