#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int key) {
 for(int i=0;i<n;i++) {
    if(arr[i]==key) {
        return 1;
    }
 }
 return 0;
}

int main() {
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int key;
cout<<"Enter Key="<<endl;
cin>>key; 
bool found=LinearSearch(arr, 10, key);
if(found) {
    cout<<"Key Is Found"<<endl;
}
else {
    cout<<"Key Not Found"<<endl;
}
return 0;
}