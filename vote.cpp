#include<iostream>
using namespace std;
int main(){
    while(1)
    {
    int i;
    cout<<"enter your age";
    cin>>i;
    if (i<18)
    {
        cout<<"you are not eligible for voting";
    }
    else{
        cout<<"you are eligible for voting";
    }
    }
    return 0;
}