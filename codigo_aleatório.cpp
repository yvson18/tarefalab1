#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int sair;
    int numero = 101,palpite;

    srand(time(NULL));
    numero = (rand() % 100) + 1;

        do{

            cout << "\nUsuario, digite um numero de 1 a 100: "<<endl;
            cin >> palpite;
            system("cls");
                if(palpite == numero){
                  cout << "Parabens humano! Vc acertou."<<endl;
                  break;
                }else if(palpite > numero){
                  cout << "Rapaz, vc esta sonhando alto!\nDigite valores mais baixos"<<endl;

                }else if(palpite < numero){
                  cout << "Muito baixo meu amigo!\nTente outra vez"<<endl;
                }

            }while(1);

        cout << "Fim de jogo";

return 0;
}
