#include <iostream>
#include <limits>
#include <cstring>
#include <cctype>

using namespace std;

// Funções de Utilidade
void pause();
void limpaTela();

string caracter_iguais(string palavra, string palavra2);
void imprime_vetor(int vet[], int tam);

int main(){
    limpaTela();
    string palavra, palavra2, aux;

    cout << "Digite uma palavra: ";
    getline(cin,palavra);

    cout << "Digite outra palavra: ";
    getline(cin,palavra2);

    aux = caracter_iguais(palavra, palavra2);
   
   cout << "Palavra 1: " << palavra << endl;
   cout << "Palavra 2: " << palavra2 << endl;
   cout << "As palavras posuem " << aux.length() << " caracteres iguais que sao: " << aux << endl;

    pause();

    return 0;
}
string caracter_iguais(string palavra, string palavra2){
    string aux = "";
    int tam;
    if(palavra.length() >= palavra2.length()){
        tam = palavra.length();
        for(int i = 0; i < tam; i++){
            if(palavra2.find(palavra[i]) != string::npos){
                aux += palavra[i];
            }
        }
    }
    else{ 
        tam = palavra2.length();

        for(int i = 0; i < tam; i++){
            
            if(palavra.find(palavra2[i]) != string::npos){
                aux += palavra2[i];
            }
        }
    }
    // uificador

    return aux;
}

void pause()
{
    // cin.ignore();
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
