#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m, n;
    int matriz[20][25];
    int matrizTransposta[25][20];
    int matriz2[20][25];
    int matrizResultado[20][25];
    int k;

    cout << "Digite o numero de linhas M da matriz M <= 20: ";
    cin >> m;
    cout << "Digite o numero de colunas N da matriz N <= 25: ";
    cin >> n;

    if (m > 20 || n > 25) {
        cout << "Tamanho da matriz excede o limite permitido." << endl;
        return 1;
    }

    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }

    // Calcular a matriz transposta
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << matrizTransposta[i][j];
        }
        cout << endl;
    }

    cout << "Digite o fator de multiplicacao K: ";
    cin >> k;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] *= k;
        }
    }

    cout << "Matriz multiplicada por " << k << ":" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }

    cout << "Digite os elementos da segunda matriz:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matrizResultado[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    cout << "Resultado da adicao com a segunda matriz:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(4) << matrizResultado[i][j];
        }
        cout << endl;
    }

    return 0;
}