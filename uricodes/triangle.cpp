#include<iostream>
#include<cmath>
//uri 1043

int main(){
    double baseA,baseB,height;
    double perimeter,area;
    std::cin>>baseA>>baseB>>height;
    if(baseA+baseB>height && baseA+height>baseB && baseB+height>baseA){
        perimeter = baseA+baseB+height;
        std::cout<<perimeter<<"\n";
    }
    else{
        area = ((baseA+baseB)/2)*height;
        std::cout<<area<<"\n";
    }

    return 0;
}
