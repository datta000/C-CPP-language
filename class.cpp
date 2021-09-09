#include<iostream>
class car{
    public:
    char name[10];
    int cc;
    void input(){
        std::cin>>name;
        std::cin>>cc;
    }
    void output(){
        std::cout<<"your favourite car is "<<name<<"/n";
        std::cout<<name<<" have a "<<cc<<"cc engine";
    }
};
int main(){
car fav;
fav.input();
fav.output();
}