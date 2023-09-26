#include <iostream>
#include <limits>
#include <cstring>

using namespace std;


int insere_meio(int* vet[], int, int);

// Funções de Utilidade
void pause();
void limpaTela();

int main()
{
    limpaTela();
    
    return 0;
}

int insere_meio(int* vet, int tam, int elemento){
    int meio = (tam-1)/2;
    int *novo_vetor = new int[tam+1];

    for (size_t i = 0; i < tam+1; i++)
    {
        if(i == meio){
            novo_vetor[meio] = elemento;
        }else{
            novo_vetor = &vet[i];
        }
    }
    vet = novo_vetor;
    return tam+1;
}

void pause()
{
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void limpaTela()
{
    cin.clear();

    // Verifica se a variável de ambiente WINDIR está definida (ambiente Windows)
    const char *windir = getenv("WINDIR");

    if (windir != nullptr && strlen(windir) > 0)
    {
        // Se estiver definida, estamos no Windows, então use "cls"
        system("cls");
    }
    else
    {
        // Caso contrário, estamos em um ambiente Unix/Linux, use "clear"
        system("clear");
    }
}
