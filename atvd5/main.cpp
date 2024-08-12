#include <iostream>

using namespace std;

int main(){

    int v1[10], v2[10];

    for(int i=0; i<10; i++){
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> v1[i];

        if(i%2==0){
            v2[i] = v1[i]*5;
        }else{
            v2[i] = v1[i]+5;
        }
    }

    cout << "\n\n";

    for(int p=0; p<10; p++){
        cout << "Posicao " << p << " do vetor 1 e de: " << v1[p] << endl;
    }

    cout << "\n\n";

    for(int p=0; p<10; p++){
        cout << "Posicao " << p << " do vetor 2 e de: " << v2[p] << endl;
    }

    return 0;
}