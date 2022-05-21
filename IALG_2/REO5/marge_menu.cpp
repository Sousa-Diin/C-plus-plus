/* Referncia da Borda do Menu Personalizando Menus com a Tabela ASCII - Linguagem C /C++
 * Canal no youtube ProgC
 * URL : https://youtu.be/5FmC9dSaKq0
 *
 */
#include <iostream>
#include <iomanip>

using namespace std;

const int MARGEM = 30;

void criaMenu(const int t, char str[]);
void criaLinhaSuperior();
void criaLinhaInferior();
void delay(long int tmp);
int main (){

	criaLinhaSuperior();
	criaMenu (MARGEM , "Escolha uma opcao: ");
	cout << ":" << setw(MARGEM+18) << ": \n";
	criaMenu (MARGEM , "[1] - Cadastrar");
	criaMenu (MARGEM , "[2] - Buscar");
	criaMenu (MARGEM , "[3] - Alterar");
	criaMenu (MARGEM , "[4] - Ordenar");
	criaMenu (MARGEM , "[5] - Excluir");
	criaMenu (MARGEM , "[0] - Sair");
	cout << ":" << setw(MARGEM+18) << ": \n";  
    criaLinhaInferior();
    
    return 0;
}

void criaLinhaSuperior()
{
    char SuperE = 58;
    char continuo = 45;
    char SuperD = 58;
    
    cout << "\n" << SuperE;
    char contin;
    for (int margem = 0; margem < MARGEM+15; margem++){
        cout << continuo;
    }
    cout << SuperD << "\n" ;
    
}            
void criaLinhaInferior()
{
    char SuperE = 58;
    char continuo = 45;
    char SuperD = 58;
    
    cout << "\n" << SuperE;
    for (int margem = 0; margem < MARGEM+15; margem++){
        cout << continuo;
    }
    cout << SuperD << "\n" ;
    
} 
void criaMenu(const int t, char str[])
{
    char lateral = 58;
    bool para = true;
    int i = 0, conta_letra = 0;
    while (i < t and para){
        if (str [i] == '\0')
            para = false;
         else
            conta_letra++;
        i++;   
    }
    
    cout << lateral;
    cout << "\t\t" << str;
    while (conta_letra < t){
        cout << " ";
        conta_letra++;
    }
    cout << lateral << endl;
    
    
}                            

