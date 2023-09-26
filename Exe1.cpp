# include <iostream>
# include <locale>
# include "MyFunc.h"

using namespace std;

int main(){

    int sis = system("echo hello");
    cout << sis;
    
    if (sis != 0)
    {
        locale::global(locale(""));
        system("clear");
    }else{
        setlocale(LC_ALL, "Portuguese");
        system("cls");
    }

    

    int vetor[10];
    int maximo, minimo;
    
    preencheVetor(vetor, 10);
 
    imprimeVetor(vetor, 10);
 
    maxmin(vetor, 10, maximo, minimo);

    cout << "O maior número e: " << maximo << endl;
    cout << "O menor número e: " << minimo << endl;

    return 0;
}