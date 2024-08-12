#include <iostream>

using namespace std;

int main(){
    int quantidade[5];
    double preco[5], precoItem[5], precoCompra = 0;

    for(int i=1; i<6; i++){
        fflush(stdin);
        cout << "\n Quantidade comprada do produto " << i << ": ";
        cin >> quantidade[i-1];
        cout << " Valor do produto " << i << ": R$ ";
        cin >> preco[i-1];
        precoItem[i-1] = quantidade[i-1] * preco[i-1];
        precoCompra += precoItem[i-1];
    }

    for(int i=1; i<6; i++){
        cout << "\nPreco produto " << i << ": R$" << precoItem[i-1];
    }

    cout << "\n\nPreco total da compra: R$" << precoCompra << endl;


    return 0;
}