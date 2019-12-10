#include<iostream>
#include<cmath>
#include<iomanip>

int main(){
    double salary,adj, sal_inc;
    std::cin>>salary;
    if(salary > 0 && salary<=400.00){
        sal_inc = ((15*salary)/100) + salary;
        adj = sal_inc - salary;
        std::cout << std::fixed << std::showpoint;
        std::cout << std::setprecision(2);
        std::cout<<"Nove salario: "<<sal_inc<<"\n";
        std::cout<<"Reajuste ganho: "<<adj<<"\n";
        std::cout<<"Em percentual: 15 %";
        std::cout<<std::endl;
    }
    else if(salary>=400.01 && salary<=800){
        sal_inc = ((salary*12)/100) + salary;
        adj = sal_inc - salary;
        std::cout << std::fixed << std::showpoint;
        std::cout << std::setprecision(2);
        std::cout<<"Nove salario: "<<sal_inc;
        std::cout<<"Reajuste ganho: "<<adj;
        std::cout<<"Em percentual: 12 %";
        std::cout<<std::endl;
    }
    else if(salary>=800.01 && salary<=1200.00){
        sal_inc = (salary*10)/100 + salary;
        adj = sal_inc - salary;
        std::cout << std::fixed << std::showpoint;
        std::cout << std::setprecision(2);
        std::cout<<"Nove salario: "<<sal_inc<<"\n";
        std::cout<<"Reajuste ganho: "<<adj<<"\n";
        std::cout<<"Em percentual: 10 %";
        std::cout<<std::endl;
    }
    else if(salary>=1200.01 && salary <=2000.00){
        sal_inc = (salary*7)/100 + salary;
        adj = sal_inc - salary;
        std::cout << std::fixed << std::showpoint;
        std::cout << std::setprecision(2);
        std::cout<<"Nove salario: "<<sal_inc<<"\n";
        std::cout<<"Reajuste ganho: "<<adj<<"\n";
        std::cout<<"Em percentual: 7 %";
        std::cout<<std::endl;
    }
    else{
        sal_inc = (salary*4)/100 + salary;
        adj = sal_inc - salary;
        std::cout << std::fixed << std::showpoint;
        std::cout << std::setprecision(2);
        std::cout<<"Nove salario: "<<sal_inc<<"\n";
        std::cout<<"Reajuste ganho: "<<adj<<"\n";
        std::cout<<"Em percentual: 4 %";
        std::cout<<std::endl;
    }
    
    return 0;
}