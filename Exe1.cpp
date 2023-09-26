# include <iostream>
# include <locale>

using namespace std;

void maxmin(int *vetor, int n, int &maximo, int &minimo);

void preencheVetor(int vetor[], int n);

void imprimeVetor(int vetor[], int n);

void verificaSistemaOperacional();

int main(){

    verificaSistemaOperacional();

    int vetor[10];
    int maximo, minimo;
    
    preencheVetor(vetor, 10);
 
    imprimeVetor(vetor, 10);
 
    maxmin(vetor, 10, maximo, minimo);

    cout << "O maior número e: " << maximo << endl;
    cout << "O menor número e: " << minimo << endl;

    return 0;
}

void verificaSistemaOperacional()
{
    // Verifica o sistema operacional para não dar erro
    if (system("echo ''") == 0)
    {
        locale::global(locale(""));
        system("clear");
    }
    else
    {
        setlocale(LC_ALL, "Portuguese");
        system("cls");
    }
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
