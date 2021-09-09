#include<iostream>
#include<stdio.h>
int main(){
    int n,rem,sum=0;
    std::cout<<"enter a number";
    std::cin>>n;
    while(n>=1){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    std::cout<<sum;
}