# include <iostream>
# include "MyFunc.h"

using namespace std;

int somaInt(int x, int y){
    return x + y;
}

int subtracaoInt(int x, int y){
    return x - y;
}

void maxmin(int *vetor, int n, int &maximo, int &minimo){
    maximo = vetor[0];
    minimo = vetor[0];
    for (int i = 0; i < n; i++){
        if (vetor[i] > maximo){
            maximo = vetor[i];
        }
        if (vetor[i] < minimo){
            minimo = vetor[i];
        }
    }
}

void preencheVetor(int vetor[], int n){
    for (int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }
    system("clear");
}

void imprimeVetor(int vetor[], int n){
    for (int i = 0; i < n; i++){
        if(i == n-1){
            cout << vetor[i];
        }else{
            cout << vetor[i] << ", ";

        }
    }
    cout << endl;
}