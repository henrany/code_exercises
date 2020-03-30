#include<iostream>
#include<algorithm>

int main(){
    int vec[3],aux[3];
    for(int i=0;i<3;i++){
        std::cin>>vec[i];
    }

    for(int i=0;i<3;i++){
        aux[i]=vec[i];
    }

    std::sort(vec,vec+3);

    for(int i=0;i<3;i++){
        std::cout<<vec[i]<<std::endl;
    }
    std::cout<<std::endl;

    for(int i=0;i<3;i++){
        std::cout<<aux[i]<<std::endl;
    }
    return 0;
}