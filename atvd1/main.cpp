#include <iostream>

using namespace std;

int main(){
    int numeros[5], SomaNumerosImpares;
    for(int i=0; i<5; i++){
        cout << "Digite um valor: ";
        cin >> numeros[i];

        if(numeros[i]%2!=0){
            SomaNumerosImpares += numeros[i];
        }
    }

    cout << "\nA soma dos numeros impares e: " << SomaNumerosImpares << "\n\n";

    return 0;
}