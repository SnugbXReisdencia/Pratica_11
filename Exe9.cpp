#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

float calc_serie(int n);

// Funções de Utilidade
void pause();
void limpaTela();

int main()
{
    limpaTela();
    int n;
    float s;
    cout << "Calcular o valor S, dado por: \n S = 1 / n + 2 / n - 1 + 3 / n - 2 + ... + n - 1 / 2 + n/1 " << endl;
    cout << "Digite o valor de N: ";
    cin >> n;
    
    s = calc_serie(n);
    cout << "O valor de S e: " << s << endl;

    pause();
    return 0;
}

float calc_serie(int n)
{
    float soma = 0.0;
    cout << "S = ";
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << i << " / " << n << " + ";

            soma += float(i) / (n);    

        }else{
            
            i == n ? cout << i << " / " << n - i + 1 << endl :
            cout << i << " / " << n - i + 1 << " + ";

            soma += float(i) / (n - i + 1);
        }
    }

    return soma;
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
