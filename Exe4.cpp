# include <iostream>
#include <locale>

using namespace std;

// Escreva uma função calcula que:
// a. receba como parâmetros duas variáveis inteiras, X e Y;
// b. retorne em X a soma de X e Y;
// c. retorne em Y a subtração de X e Y.

int soma(int x, int y){
    return x + y;
}

int subtracao(int x, int y){
    return x - y;
}

int main(){
    locale::global(locale(""));
    system("clear");

    int x, y;

    cout << "Digite um numero: ";
    cin >> x;

    cout << "Digite outro numero: ";
    cin >> y;

    cout << "A soma e: " << soma(x, y) << endl;
    cout << "A subtração e: " << subtracao(x, y) << endl;

    return 0;
}