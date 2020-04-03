#include<iostream>
#include<cmath>

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    if(a>b && b<=c){
        std::cout<<":)"<<std::endl;
    }
    else if(a<b && b>=c){
        std::cout<<":("<<std::endl;
    }
    else if(a<b && b<c && std::abs(b-a)>std::abs(c-b)){
        std::cout<<":("<<std::endl;
    }
    else if(a>b && b<c && std::abs(b-a)<=std::abs(c-b)){
        std::cout<<":)"<<std::endl;
    }
    else if(a>b && b>c && std::abs(a-b)>std::abs(b-c)){
        std::cout<<":)"<<std::endl;
    }
    else if(a>b && b>c && std::abs(a-b)>=std::abs(b-c)){
        std::cout<<":("<<std::endl;
    }
    else if (a<=b && b<c){
        std::cout<<":)"<<std::endl;
    }
    else{
        std::cout<<":("<<std::endl;
    }
    return 0;
}