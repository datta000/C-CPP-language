#include<iostream>
int main(){
    int i,f=1;
    std::cout<<"enter any number";
    std::cin>>i;
    for(i;i>0;i--){
        f=f*i;
    }
    std::cout<<"the factorial is"<< f;
    return 0;
}