#include<iostream>
#include<cmath>

int main(){
    int n,x,y;
    std::cin>>n;
    while(n--){
        std::cin>>x>>y;
        int sum=0,count=0;
        while(count<y){
            if(x%2!=0){
                sum+=x;
                count++;
                x++;
            }
            else{
                x++;
            }
        }
        std::cout<<sum;
    }
    std::cout<<"\n";
    return 0;
}