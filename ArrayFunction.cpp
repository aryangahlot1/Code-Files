#include<iostream>
using namespace std;
void function(int arr[],int size) {
    for (int i=0;i<=size;i++)
    cout<<arr[i]<<endl;
}
int main() {
    int first[15]={2,7};
    function(first,6);
}