#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

void multiplica_por_n(int *vet1, int tam, int n);

void imprime_vetor(int vet[], int);

void preenche_vetor(int vet[], int tam);

void passa_vetor(int vet[], int tam, int vetor[]);

// Funções de Utilidade
void pause();
void limpaTela();

int main()
{
    limpaTela();
    int tam, elemento;
    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    int *vet1 = new int[tam];

    preenche_vetor(vet1, tam);

    cout << "Vertor: ";
    imprime_vetor(vet1, tam);
    
    cout << "Informe o multiplicador: ";
    cin >> elemento;
    multiplica_por_n(vet1, tam, elemento);

    cout << "Vetor com os resultados: ";
    imprime_vetor(vet1, tam);

    return 0;
}

void multiplica_por_n(int *vet1, int tam, int n)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vet1[i] << " X " << n << " = " << vet1[i] * n << endl;
        vet1[i] = vet1[i] * n;
    }
}

void imprime_vetor(int vet[], int tam)
{
    cout << "\n=====================================\n";
    for (int i = 0; i < tam; i++)
    {
        if (i == tam - 1)
        {
            cout << vet[i];
        }
        else
        {
            cout << vet[i] << ", ";
        }
    }
    cout << "\n=====================================\n";
}

void preenche_vetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vet[i] = i+1;
    }
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
