#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

int conta_primos(int *vet1, int tam);

void imprime_vetor(int vet[], int);

void preenche_vetor(int vet[], int tam);

void passa_vetor(int vet[], int tam, int vetor[]);

// Funções de Utilidade
void pause();
void limpaTela();

int main()
{
    limpaTela();
    int tam, qtd_primos;
    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    int *vet1 = new int[tam];

    preenche_vetor(vet1, tam);

    cout << "Vertor: ";
    imprime_vetor(vet1, tam);

    qtd_primos = conta_primos(vet1, tam);

    cout << "Quantidade de Primos no Vetor: " << qtd_primos << endl;

    
    pause();
    return 0;
}

int conta_primos(int *vet1, int tam)
{
    int qtd_primos = 0, primo = 0;
    cout << "\nOs numeros primos no vetor sao: \n";
    for (int i = 0; i < tam; i++)
    {
        for (int j = 1; j < tam; j++)
        {
            if (vet1[i] == 1 || vet1[i] == 0)
            {
                primo = 2;
            }
            else
            {
                if (vet1[i] % j == 0)
                {
                    primo++;
                }
            }
        }
        if (primo == 2)
        {
            cout << vet1[i] << " ";
            
            qtd_primos++;
        }
        primo = 0;
    }
    cout << endl;
    return qtd_primos;
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
        vet[i] = i + 1;
    }
}

void pause()
{
    cin.ignore();
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
