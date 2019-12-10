#include<iostream>

//uri 1044
int main(){
    int a,b;
    std::cin>>a>>b;
    if(b%a == 0){
        std::cout<<"are multiples"<<"\n";
    }
    else{
        std::cout<<"are not multiples"<<"\n";
    }
    return 0;
}