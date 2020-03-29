#include<iostream>
#include<iomanip>

int main(){
    long double n,vec[100];
    std::cin>>n;
    for(int i=0;i<100;i++){
        if(i==0){
            vec[i] = n;
        }
        else{
            vec[i]=vec[i-1]/2;
        }
    }

    for(int i=0;i<100;i++){
        std::cout<<std::fixed<<std::showpoint;
        std::cout<<std::setprecision(4);
        std::cout<<"N["<<i<<"] = "<<vec[i]<<std::endl;
    }
    return 0;
}