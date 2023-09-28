#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

// Funções de Utilidade
void pause();
void limpaTela();

int* busca_letra(string, char, int &tam);
void imprime_vetor(int vet[], int tam);

int main(){
    limpaTela();
    int *vet, tam;
    string palavra;
    char letra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    cout << "Digite uma letra que sera procurada na palavra: ";
    cin >> letra;

    vet = busca_letra(palavra, letra, tam);

    if(tam > 0){
        cout   << "\nA letra '" << letra << "' foi encontrada na palavra '" << palavra << "'\n";
        tam == 1 ? cout << "Na posicao: " : cout   << "Nas posicoes: ";
        imprime_vetor(vet, tam);
    }else{
        cout << "\nA letra '" << letra << "' nao foi encontrada na palavra '" << palavra << "'\n";
    }

    pause();

    return 0;
}

void imprime_vetor(int vet[], int tam)
{
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

int* busca_letra(string palavra, char letra, int &tam){
    int *vet = new int[palavra.length()];
    int *vet2;
    tam = 0;
    for(char l : palavra){
        if(l == letra){
            vet[tam] = palavra.find(l);
            palavra[palavra.find(l)] = ' ';
            tam++;
        }
    }
    vet2 = new int[tam];
    for(int i = 0; i < tam; i++){
        vet2[i] = vet[i];
    }
    return vet2;
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
