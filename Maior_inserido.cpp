#include <iostream>


using namespace std;

int main(){

    int ValorDigitado,ValorAnterior = 0;


        do{

               if(!ValorDigitado){
                break;
               }else{
                cin >> ValorDigitado;

                    if(ValorDigitado > ValorAnterior){
                        ValorAnterior = ValorDigitado;
                    }

               }



}while(1);

        if(!ValorDigitado){
            cout << ValorAnterior;
        }
}
