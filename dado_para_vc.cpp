#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

        int lado,n;

            do{

            cout << "Digite a quantidade <n> de lancamentos: " << endl;
            cin >> n;

                if(!n){
                   break;
                }else{

                int lan[n];
                float percent[n] = {},qnt[6] = {};
                srand(time(NULL));


                        for(int i = 0;  i < n; i++){
                            lan[i] = rand() % 6 + 1;
                          }


                        for(int i = 0; i < n; i++){

                                if(lan[i] == 1){
                                    qnt[0] += 1;
                                }
                                if(lan[i] == 2){
                                    qnt[1] += 1;
                                }
                                if(lan[i] == 3){
                                    qnt[2] += 1;
                                }
                                if(lan[i] == 4){
                                    qnt[3] += 1;
                                }
                                if(lan[i] == 5){
                                    qnt[4] += 1;
                                }
                                if(lan[i] == 6){
                                    qnt[5] += 1;
                                }
                        }

                       int j = 1;
                       for(int i = 0; i < 6; i++) {

                       float pe = (float)(qnt[i]/n)*100 ;

                            cout <<"O percentual de vezes que o lado #" <<j<<"apareceu foi: "<<pe<<"%"<< endl;
                            j++;
                       }


        }

}while(1);

return 0;
}
