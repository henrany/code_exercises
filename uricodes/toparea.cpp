#include<iostream>
#include<string>
#include<iomanip>

int main(){
    std::string carac;
    int mat[12][12];
    double sum=0,ave;
    std::cin>>carac;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            std::cin>>mat[i][j];
        }
    }

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(i<j && j<11-i){
                    sum+=mat[i][j];
            }
        }
    }

    ave=sum/30;


    if(carac=="S"){
        std::cout<<std::fixed<<std::showpoint;
        std::cout<<std::setprecision(1);
        std::cout<<sum<<std::endl;
    }
    else if(carac=="M"){
        std::cout<<std::fixed<<std::showpoint;
        std::cout<<std::setprecision(1);
        std::cout<<ave<<std::endl;
    }
    else{
        exit(1);
    }

    return 0;
}