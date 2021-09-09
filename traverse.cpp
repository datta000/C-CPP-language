#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(j=0;j<n;j++){
        cout<<arr[j];
    }
    return 0;
}