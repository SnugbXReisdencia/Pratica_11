#include <iostream>
#include <limits>
#include <cstring>
#include <cctype>

using namespace std;

// Funções de Utilidade
void pause();
void limpaTela();

string codifica(string);
string decodifica(string palavra);
void imprime_vetor(int vet[], int tam);

int main(){
    limpaTela();
    string palavra, p_codificada, p_decodificada;

    cout << "Digite uma palavra: ";
    getline(cin,palavra);
    
    p_codificada = codifica(palavra);

    cout << "A palavra codificada: " << p_codificada << endl;

    p_decodificada = decodifica(p_codificada);

    cout << "A palavra decodificada: " << p_decodificada << endl;

    pause();

    return 0;
}
string codifica(string palavra){
    string aux = "";
    int tam = palavra.length();
    for(int i = 0; i < tam; i++){
        if(palavra[i] == 'z'){
            aux = aux + 'a';
        }else if(palavra[i] == 'Z'){
            aux = aux + 'A';
        }else if(isalpha(palavra[i])){
            aux += char(palavra[i]+1);
        }else{
            aux += palavra[i];
        }
    }
    return aux;
}

string decodifica(string palavra){
    string aux = "";
    int tam = palavra.length();
    for(int i = 0; i < tam; i++){
        if(palavra[i] == 'a'){
            aux = aux + 'z';
        }else if(palavra[i] == 'A'){
            aux = aux + 'z';
        }else if(isalpha(palavra[i])){
            aux += char(palavra[i]-1);
        }else{
            aux += palavra[i];
        }
    }
    return aux;
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
