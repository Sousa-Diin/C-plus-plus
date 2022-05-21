#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
using namespace std;

const int MARGEM = 30;

void criaMenu(const int t, char str[]);
void criaLinhaSuperior();
void criaLinhaInferior();
int password ();
void progressBar (long double tmp);
void delay(long int tmp);
void home (int *ptr_p);
void desenhaMenu();
int main (){

	
	int entrar = 0;
	
	int paginas = 0;
	int * ptr_pag = &paginas;
	cout << "\n\nPAGINA PRINCIPAL " << setw (100) << paginas << endl;

	desenhaMenu();
	//progressBar (600000000);
	
		
	if (password () == 0){
		*ptr_pag += 1;
		home(ptr_pag);
	}
	else{
		cout << "Login bloqueado " << "\n";
		delay(200000000);
		system("clear");
		system("exit");
	}
	//cout << entrar << endl;
	cout << endl;

	return 0;
}

void progressBar (long double tmp)
{
	cout << "carregando paginas aguarde...\n\n";
	for (double t = 0; t < tmp; t++);
	system("clear");
	
}
int password ()
{
	
	string login;
	string senha;
	bool Entrar = 1;
	int tentativas = 0;
	while ( tentativas < 3 and Entrar){
		cout << "\nTentativas " << tentativas+1 << "/3\n\t -> login: ialg | senha: ialg212 - [Minusculo]";
		cout << "\nLOGIN:  ";
		cin >> login;
		cout << "\nSENHA:  ";
		cin	>> senha;
		
		if((login == "ialg") and (senha == "ialg212")){
			Entrar = false;
        }else{
			//system("clear");
			Entrar = true;
		}
		tentativas++;
	}
    return Entrar;
}
void desenhaMenu()
{

	cout << "\t\t" << "\n                       ______    \n";                    
	cout << "\t\t" << " _________        .---"""      """---. \n";             
	cout << "\t\t" << ":______.-':      :  .--------------.  : \n";            
	cout << "\t\t" << "| ______  |      | :                : |\n";          
	cout << "\t\t" << "|:______B:|      | |   Cadastro de  | |\n";             
	cout << "\t\t" << "|:______B:|      | | Carros nacional| |\n";             
	cout << "\t\t" << "|:______B:|      | |  e importados. | |\n";             
	cout << "\t\t" << "|         |      | |                | |\n";             
	cout << "\t\t" << "|:_____:  |      | |                | |\n";             
	cout << "\t\t" << "|    ==   |      | :                : |\n";             
	cout << "\t\t" << "|       O |      :  '--------------'  :\n";             
	cout << "\t\t" << "|       o |      :'---...______...---' \n";             
	cout << "\t\t" << "|       o |-._.-i___/'             \._ \n";             
	cout << "\t\t" << "|'-.____o_|   '-.   '-...______...-'  `-._\n";          
	cout << "\t\t" << ":_________:      `.____________________   `-.___.-. \n";
	cout << "\t\t" << "                .'.eeeeeeeeeeeeeeeeee.'.      :___:\n";
	cout << "\t\t" << " Ialg - MG    .'.eeeeeeeeeeeeeeeeeeeeee.'. \n";        
	cout << "\t\t" << "              :____________________________:\n";
	cout << endl;
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
	string str_aux = (string)str;
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
    cout << "\t\t" << str_aux;//OBSERVACAO AUMENTAR 2 TABULACOES -> \t\t NO COUT
								  //QND FOR RODAR NO REPLITialg
    while (conta_letra < t){
        cout << " ";
        conta_letra++;
    }
    cout << lateral << endl;
    
    
}   
void home (int *ptr_p)
{
        
         char opcao;
     do{       // MENU DE PRINCIPAL - INICIO
                system("clear");
                //cout << "HOME" << setw (100) << *ptr_p << endl;
                cout << "\n\n";
			
                criaLinhaSuperior();
				cout << ":HOME" << setw (MARGEM+11) << *ptr_p << ":\n";
				cout << ":" << setw(MARGEM+18) << ": \n";
				cout << ":" << setw(MARGEM+18) << ": \n";
				cout << ":" << setw(MARGEM+18) << ": \n";
				criaMenu (MARGEM ,"Escolha uma opcao: ");
				cout << ":" << setw(MARGEM+18) << ": \n";
				criaMenu (MARGEM , "[1] - Incluir");
				criaMenu (MARGEM , "[2] - Listar");
				criaMenu (MARGEM , "[3] - Excluir");
				criaMenu (MARGEM , "[4] - Alterar");
				criaMenu (MARGEM , "[5] - Ordenar");
				criaMenu (MARGEM , "[0] - Sair");
				cout << ":" << setw(MARGEM+18) << ": \n";  
			    criaLinhaInferior();
                cout << "\n\n\t\t\t\t\\>"; cin >> opcao;
                cout << "\n\n";
                switch (opcao) // switch principal
                {
                    case '1' :
                        //insert();
						cout << " Em construção...\n";
						*ptr_p = 1;
						home(ptr_p);
                        break;
                    case '2' : 
                         do{
                                system("clear");
								criaLinhaSuperior();
								cout << ":LISTAR" << setw (MARGEM+7) << *ptr_p+1 << ":\n";
								cout << ":" << setw(MARGEM+18) << ": \n";
								cout << ":" << setw(MARGEM+18) << ": \n";
								cout << ":" << setw(MARGEM+18) << ": \n";
								criaMenu (MARGEM ,"Escolha uma opcao: ");
								cout << ":" << setw(MARGEM+18) << ": \n";
								criaMenu (MARGEM , "[1] - Listar todos.");
								criaMenu (MARGEM , "[2] - Listar por item.");
								cout << ":" << setw(MARGEM+18) << ": \n";  
			   					criaLinhaInferior();
                                        criaLinhaSuperior();
                                        cout << "\t\t\t\t\\>"; cin >> opcao;
                                        switch (opcao)// Opcao de Listar - INICIO
                                        {
                                           case '1' :
											    cout << "\n\nLISTAR TODOS " << setw (100) << *ptr_p+1 << endl;
                                                cout <<"Listando...\n";
                                                delay(2000000);
                                                system("clear");
											   	*ptr_p = 1;
											   	home(ptr_p);
                                                break;
											case '2' :
						                        cout << "Funcao indisponivel no momento. \n"
						                             << "Situacao: < em desenvovimento.... > " <<endl;
						                        delay (200000000); 
						                        break;
										}
										
							} while (opcao > 0 and opcao <= 2);// Opcao de Listar - FIM
							criaLinhaInferior();
                                            
                    case '3' :
                    
                        //exibir();
						*ptr_p +=2;
						system("clear");
						criaLinhaSuperior();
						criaMenu(MARGEM, "[1] - Excluir por nome");
						criaLinhaInferior();
						*ptr_p -=2;
						home(ptr_p);
                        break;
                    
					case '4' :
                                    *ptr_p +=2;
                                     do{  // MENU DE ALTERAR POR ITENS - INICIO
											system("clear");
											criaLinhaSuperior();
											cout << ":ALTERAR POR ITEM" << setw (MARGEM) << *ptr_p+1 << ":\n";
											cout << ":" << setw(MARGEM+18) << ": \n";
											cout << ":" << setw(MARGEM+18) << ": \n";
											cout << ":" << setw(MARGEM+18) << ": \n";
											criaMenu (MARGEM ,"Escolha uma opcao: ");
											cout << ":" << setw(MARGEM+18) << ": \n";
											criaMenu (MARGEM , "[1] - Alterar por marca.");
											criaMenu (MARGEM , "[2] - Alterar por modelo.");
											criaMenu (MARGEM , "[3] - Alterar por ano.");
											cout << ":" << setw(MARGEM+18) << ": \n";  
								   			criaLinhaInferior();
			                                //criaLinhaSuperior();
											cout << "\t\t\t\t\\>"; cin >> opcao;
			                                        
                                            switch (opcao) 
                                            {
                                                case '1' :
	                                                cout << "comando1" ;
													delay(10000000);
													*ptr_p = 1;
												   	home(ptr_p);
	                                                break;
                                                case '2' :
                                                        cout << "comando2" ;
														*ptr_p = 1;
											   			home(ptr_p);
                                                        break;
                                                case '3' :
                                                        cout << "comando3" ;
																		
                                                        break;
                                                                        
                                                default :
                                                    cout << " \t\tOpcao invalida.\n";
                                                    delay(2000000);
													
                                                	home(ptr_p);
											}
										 	*ptr_p = 0;
                                    	}while (opcao);// MENU DE BUSCA POR ITENS - FIM
                	case '5' :
						system("clear");	
                        break;                                                           
                    case '0' :
						system("clear");
                        desenhaMenu();
						password();
						*ptr_p = 1;
						home(ptr_p);
                        break;
                	default:
                        cout << setw(10);
                        cout << "\t\tInsira um comando valido.\n";
                        delay(2000000000);
				}
							 
        } while ( opcao != 5);  // MENU DE PRINCIPAL - FIM
}

/*******FUNCAO DE ATRASO DELAY************/
void delay(long int tmp) 
{
    for (int time = 0; time < tmp;time++ );
}  
