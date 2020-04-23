#include<iostream>
void seq(int n){
    int totQuant=0,count=1;
    for(int i=0;i<=n;i++){
        if(i==0){
            totQuant=1;
        }
        else if(i==1){
            totQuant=2;
        }
        else
        {
            totQuant+=i;
        }
        
    }
    std::cout<<totQuant<<std::endl;
}

int main(){
    int n;
    while(std::cin>>n){
        seq(n);
    }
    return 0;
}