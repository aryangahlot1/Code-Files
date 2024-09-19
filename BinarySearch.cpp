#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"Enter the Element- "<<endl;
    cin>>element;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            cout<<"Element is at "<<i+1<<" position "<<endl;
            flag = true;
            break;
        }
    }
    if(flag==false){
        cout<<"Element is not present in the array "<<endl;
    }
    return 0;
}