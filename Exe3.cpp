# include <iostream>

using namespace std;

// Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
// valores destas variáveis. Depois faça o programa principal para testar a sua função.
void ordena(float a, float b, float c, float d){
    float aux;
    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }
    if(a > c){
        aux = a;
        a = c;
        c = aux;
    }
    if(a > d){
        aux = a;
        a = d;
        d = aux;
    }
    if(b > c){
        aux = b;
        b = c;
        c = aux;
    }
}

int main(){

    int a, b, c, d;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    cout << "Digite o valor de d: ";
    cin >> d;
    

    return 0;
}