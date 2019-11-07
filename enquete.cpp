#include <iostream>
#include <time.h>
#include<stdlib.h>

using namespace std;
extern double calculaPercent(int,int);

int main(){

    int voto = 0,jogador[23]={0},totalvot = 0;


cout << "Quem foi o melhor jogador? \n\n";

    while(1){

        cout << "Numero do jogador (0=fim): "<< endl;
        cin >>voto;
        if(voto>= 0 && voto<=23){
            if(!voto){
                break;
            }else{
            ++jogador[voto-1];
            totalvot++;
            }
        }else{
           cout << "Informe um valor entre 1 e 23 ou 0 para sair!"<<endl;
        }

    }

    cout<< "Resultado da Votacao\n\n"<<endl;
    cout << "Foram computados: "<<totalvot<<endl;

    int jogadores = 1;
    for(int i = 0; i < 23 ; i ++){

        if(jogador[i] != 0){

            cout << jogadores <<"       votos:"<< jogador[i] <<"       "<< calculaPercent(jogador[i],totalvot)<< endl;

        }

    jogadores++;
  }


return 0;
 }
double calculaPercent(int numerador, int denominador){
    return ((double)numerador/denominador)*100;
}


