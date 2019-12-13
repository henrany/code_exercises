#include<iostream>
#include<cmath>

int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=10;i++){
        std::cout<<i<<" x "<<n<<" = "<<i*n;
        std::cout<<std::endl;
    }
    return 0;
}