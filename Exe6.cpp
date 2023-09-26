#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

int *intercala(int *vet1, int tam1, int *vet2, int tam2);

// Funções de Utilidade
void limpaTela_palse();
void pause();
void limpaTela();
void verificaSistemaOperacional();

int main()
{
    limpaTela();
    int *vet3;

    int vet1[] = {1, 2, 3, 4, 5};
    int vet2[] = {6, 7, 8, 9, 10, 11, 12};

    vet3 = intercala(vet1, 5, vet2, 7);

    for (int i = 0; i < 12; i++)
    {
        if(i == 11){
            cout << vet3[i] << " ";
        }else{
            cout << vet3[i] << ", ";
        }
    }

    limpaTela_palse();

    return 0;
}

int *intercala(int *vet1, int tam1, int *vet2, int tam2)
{
    int *vet3;
    if (tam1 == tam2)
    {
        vet3 = new int[tam1 + tam2];
        for (int i = 0, j = 0, k = 0; i < (tam1 + tam2); i++)
        {
            if (i % 2 == 0)
            {
                vet3[i] = vet1[j];
                j++;
            }
            else
            {
                vet3[i] = vet2[k];
                k++;
            }
        }
    }else{
        vet3 = new int[tam1 + tam2];
        for (int i = 0, j = 0, k = 0; i < (tam1 + tam2); i++)
        {
            if (i % 2 == 0)
            {
                if(j < tam1){
                    vet3[i] = vet1[j];
                    j++;
                }else{
                    vet3[i] = vet2[k];
                    k++;
                }
            }
            else
            {   
                if(k < tam2){
                    vet3[i] = vet2[k];
                    k++;
                }else{
                    vet3[i] = vet1[j];
                    j++;
                }
            }
        }
    }
    
    return vet3;
}

void verificaSistemaOperacional()
{
    // Verifica o sistema operacional para não dar erro
    if (system("echo ''") != 0)
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

void pause()
{
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
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

void limpaTela_palse()
{
    pause();
    limpaTela();
}