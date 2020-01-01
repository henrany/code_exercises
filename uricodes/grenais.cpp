#include<iostream>
//uri 1131

int main(){
    int score1=0,score2=0,score3=0,input,gre,inter,n=1;
    std::cin>>inter>>gre;
    if(inter>gre){
        score1++;
    }
    else if(inter<gre){
        score2++;
    }
    else if(score1==score2){
        score3++;
    }
    for(int i=0;i<n;i++){
    std::cout<<"Novo grenal (1-sim 2-nao)";
    std::cout<<std::endl;
        std::cin>>input;
        if(input == 1){
            n++;
            std::cin>>inter>>gre;
            if(inter>gre){
                score1++;
                continue;
            }
            else if(inter<gre){
                score2++;
                continue;
            }
            else{
                score3++;
                continue;
            }
        }
        else{
            break;
        }
    }
    std::cout<<n<<" grenais"<<std::endl;
    std::cout<<"Inter:"<<score1<<std::endl;
    std::cout<<"Gremio:"<<score2<<std::endl;
    std::cout<<"Empates:"<<score3<<std::endl;
    if(score1>score2){
        std::cout<<"Inter venceu mais"<<std::endl;
    }
    else if(score1<score2){
        std::cout<<"Gremio venceu mais"<<std::endl;
    }
    else if(score1==score2){
        std::cout<<"Nao houve vencedor"<<std::endl;
    }
    else{
        exit(1);
    }
    return 0;
}