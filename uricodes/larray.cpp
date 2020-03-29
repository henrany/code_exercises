#include<iostream>
#include<string>
#include<iomanip>

int main(){
    int l;
    std::string op;
    std::cin>>l;
    std::cin>>op;
    double m[12][12],sum=0,ave;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            std::cin>>m[i][j];
        }
    }

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
                if(l==i){
                    sum+=m[i][j];
                    ave=sum/12;
            }
        }
    }
    if(op=="S"){
        std::cout<<std::fixed<<std::showpoint;
        std::cout<<std::setprecision(1);
        std::cout<<sum<<std::endl;
    }
    else if(op=="M"){
        std::cout<<std::fixed<<std::showpoint;
        std::cout<<std::setprecision(1);
        std::cout<<ave<<std::endl;
    }
    return 0;
}