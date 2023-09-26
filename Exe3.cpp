# include <iostream>
#include <cstring>

using namespace std;

// Faça uma função que receba (por referência) 4 variáveis int e ordena (crescente) os
// valores destas variáveis. Depois faça o programa principal para testar a sua função.

void ordena(int &a, int &b, int &c, int &d);
void limpaTela();

int main(){
    
    limpaTela();

    int a, b, c, d;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    cout << "Digite o valor de d: ";
    cin >> d;
    
    ordena(a, b, c, d);
    cout << a << " " << b << " " << c << " " << d;

    return 0;
}

void limpaTela()
{
    cin.clear();

    // Verifica se a variável de ambiente WINDIR está definida (ambiente Windows)
    const char *windir = std::getenv("WINDIR");

    if (windir != nullptr && std::strlen(windir) > 0)
    {
        // Se estiver definida, estamos no Windows, então use "cls"
        std::system("cls");
    }
    else
    {
        // Caso contrário, estamos em um ambiente Unix/Linux, use "clear"
        std::system("clear");
    }
}

void ordena(int &a, int &b, int &c, int &d){
    int aux;
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
    if(b > d){
        aux = b;
        b = d;
        d = aux;
    }
    if(c > d){
        aux = c;
        c = d;
        d = aux;
    }
}
