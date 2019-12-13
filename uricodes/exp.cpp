#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
//uri 1094

struct Exp{
    double num;
    std::string carac;
};

void add(Exp vec[], int n){
    for(int i=0;i<n;i++){
        std::cin>>vec[i].num>>vec[i].carac;
    }
}

void get_quant(Exp vec[], std::string caract,std::string name, int n){
    double sum=0;
    for(int i=0;i<n;i++){
        if(vec[i].carac == caract){
            sum+=vec[i].num;
        }
    }
    std::cout<<"Total de "<<name<<": "<<sum;
    std::cout<<std::endl;
}

void get_perc(Exp vec[],std::string caract, std::string name, int n){
    double tot_sum=0,sum=0;
    double percentage=0;
    for(int i=0;i<n;i++){
        tot_sum+=vec[i].num;
        if(vec[i].carac == caract){
            sum+=vec[i].num;
        }
    }
    percentage = (sum/tot_sum)*100;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout<<"Percentual de "<<name<<": "<<percentage<<" %";
    std::cout<<std::endl;
}

void print(Exp vec[], int n){
    double tot_sum=0;
    for(int i=0;i<n;i++){
        tot_sum+=vec[i].num;
    }
    std::cout<<"Total: "<<tot_sum<<" cobaias";
    std::cout<<std::endl;
}

int main(){
    int n;
    std::cin>>n;
    Exp vec[n];
    add(vec,n);
    print(vec,n);
    get_quant(vec,"C","coelhos",n);
    get_quant(vec,"R","ratos",n);
    get_quant(vec,"S","sapos",n);
    get_perc(vec,"C","coelhos",n);
    get_perc(vec,"R","ratos",n);
    get_perc(vec,"S","sapos",n);
    return 0;
}