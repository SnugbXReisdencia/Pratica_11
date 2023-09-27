#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

int insere_meio(int *vet, int tam, int elemento);

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

    cout << "Vetor 1 antigo tamanho: " << tam << endl;
    imprime_vetor(vet1, tam);

    cout << "Informe o elemento que deseja inserir no meio: ";
    cin >> elemento;

    tam = insere_meio(vet1, tam, elemento);
    cout << "Vetor 1 novo tamanho: " << tam << endl;
    imprime_vetor(vet1, tam);

    return 0;
}

int insere_meio(int *vet1, int tam, int elemento)
{
    int meio = (tam) / 2;
    cout << "Meio: " << meio << endl;
    int *novo_vetor = new int[tam + 1];

    for (int i = 0, j = 0; i < (tam + 1); i++, j++)
    {
        if (i == meio)
        {
            novo_vetor[i] = elemento;
            j--;
        }
        else
        {
            novo_vetor[i] = vet1[j];
        }
    }
    tam++;
    passa_vetor(vet1, tam, novo_vetor);
    return tam;
}

void imprime_vetor(int vet[], int tam)
{
    cout << "=====================================\n";
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
        vet[i] = i;
    }
}

void passa_vetor(int vet[], int tam, int vetor[])
{
    for (int i = 0; i < tam; i++)
    {
        vet[i] = vetor[i];
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
