#include<iostream>
#define max 1000000

int main(){
    int vec[max],n,sum=0,count=0,ini;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>vec[i];
    }

    ini = vec[0];
    for(int i=0;i<n;i++){
        if(vec[i]%2==0){
            if(vec[i-1]== ini){
                sum+=vec[i];
                count=2;
            }
            else{
                sum+=vec[i-1]-1;
            }
        }
        else{
            sum+=vec[i];
            vec[i]-=1;
            count++;
        }
    }
    sum-=count;
    std::cout<<count<<" "<<sum<<std::endl;
    return 0;
}