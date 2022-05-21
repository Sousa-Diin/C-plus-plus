/* Trabalho de IALG
 * Tema do trabalho: " Carro "
 * Identificador : placa
 *
 * NOME: Gabriel Luis de Assis Souza     -           Matricula: 202110329    Turma:  22A
 * NOME: Jonatha Levi dos Santos Lustosa -           Matricula: 202020161    Turma:  22B
 * NOME: Wildes Augusto de Sousa -                   Matricula: 202020602    Turma:  22B

 // OBSERVACOES SOBRE O PROGRAMA 
 * 
 * 
 * 
 */

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<cstring>
using std::string;
using std::getline;
using std::strcpy;

//#include<stdlib.h>

#include <iomanip>
// usado para ajustar a largura no modo de exibicao
using std::setw; 

//Capacidade de amarzenamento do vetor cadastro
 

    struct Carro
    {
        string placa; 
        string modelo;
        string marca;
        int ano;
        string descricao;

    };
	const int MARGEM = 30;
    /*********PROTOTIPO DAS FUNCOES***********/
	
	void busca(Carro vetor[], int inicio, int fim, string buscado, int &meio);
	void excluir(Carro vetor[], int &tam, int &controle, int &posBuscado);
	void alterar(Carro vetor[], int &controle, int &posBuscado);
	void inserir(Carro vetor[], int &tam, int&controle);
	void listar(Carro vetor[], int &tam, int&controle);
	void inicializa(Carro vetor[], int &capacidade);
	void mergeAll(Carro *arr, int p, int q, int r);
	void merge (Carro *S, int inicio, int fim);
	void arraste(Carro vetor[], int &controle);
    void criaMenu(const int t, char str[]);
	void criaLinhaSuperior();
	void criaLinhaInferior();
	void delay(long int tmp);
	void home (int *ptr_p);
	void desenhaMenu(); 
	int password ();
    /*************FUNCAO PRINCIPAL****************/
    int main (){
		//int contEntrada=0, posBuscado;
	
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
    /*******FUNCAO DE ATRASO DELAY************/
	void delay(long int tmp) 
	{
	    for (int time = 0; time < tmp;time++ );
	}  

	/***********FUNCAO CRIA MENU*********************/
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
	    cout << "\t\t\t\t" << str_aux;//OBSERVACAO DIMINUIR 2 TABULACOES -> \t\t NO COUT
									  //QND FOR RODAR NO LINUX
	    while (conta_letra < t){
	        cout << " ";
	        conta_letra++;
    }
    cout << lateral << endl;
    
    
	}   
    
    /********************FUNCAO HOME*************************/
   void home (int *ptr_p)
	{
		int contEntrada=0, posBuscado;
		int capacidade = 10;
		Carro cadastro[capacidade];
		//Carro *prtCadastro = cadastro; //Acessa os campos p/ordenar
	        
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
	                        inserir(cadastro, capacidade, contEntrada);
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
												    listar(cadastro, capacidade, contEntrada);
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
	                    
	                    	//*ptr_p +=2;
							system("clear");
							criaLinhaSuperior();
							criaMenu(MARGEM, "[1] - Excluir por placa");
							criaLinhaInferior();
							//excluir(cadastro, capacidade, contEntrada, posBuscado);
							//arraste(cadastro, contEntrada);
							*ptr_p =2;
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
												criaMenu (MARGEM , "[1] - Alterar por placa.");
												criaMenu (MARGEM , "[2] - Alterar por modelo.");
												criaMenu (MARGEM , "[3] - Alterar por ano.");
												cout << ":" << setw(MARGEM+18) << ": \n";  
									   			criaLinhaInferior();
				                                
												cout << "\t\t\t\t\\>"; cin >> opcao;
				                                        
	                                            switch (opcao) 
	                                            {
	                                                case '1' :
		                                                alterar(cadastro, contEntrada, posBuscado);
														*ptr_p = 1;
													   	home(ptr_p);
		                                                break;
	                                                case '2' :
	                                                        cout << "indisponivel" ;
															*ptr_p = 1;
												   			home(ptr_p);
	                                                        break;
	                                                case '3' :
	                                                        cout << "indisponivel" ;
															home(ptr_p);			
	                                                        break;
	                                                                        
	                                                default :
	                                                    cout << " \t\tOpcao invalida.\n";
	                                                    delay(2000000);
														
	                                                	home(ptr_p);
												}
											 	*ptr_p = 0;
	                                    	}while (opcao);// MENU DE BUSCA POR ITENS - FIM
	                	case '5' :
							merge(cadastro, 0 ,capacidade - 1);
							*ptr_p = 1;
							home(ptr_p);
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
    /***********FUNCAO INSERIR*********************/
	void inicializa(Carro vetor[], int &tam)
	{
		for(int indice=0; indice<tam; indice++)
		{
			vetor[indice].placa="-1";
			vetor[indice].modelo="-1";
			vetor[indice].marca="-1";
			vetor[indice].ano=-1;
			vetor[indice].descricao="-1";
		}
	}

	//Função que faz a entrada de dados
	void inserir(Carro vetor[], int &tam, int&controle)
	{
		int verifica=1;
		while(verifica==1 and controle<tam)
		{
			cout<<"Digite a placa:\n";
			cin>>vetor[controle].placa;
			cout<<"Digite o nome:\n";
			cin>>vetor[controle].modelo;
			cout<<"Digite a marca:\n";
			cin>>vetor[controle].marca;
			cout<<"Digite o ano:\n";
			cin>>vetor[controle].ano;
			cout<<"Digite a descricao:\n";
			//cin>>vetor[controle].descricao;
			cin.ignore();
			getline(cin, vetor[controle].descricao);
			
			
			controle++;
			
			cout<<endl;
					
			cout<<"Deseja inserir um novo cadastro, digite 1: \n";
			cout<<"Para ir para o menu, digite zero (0): \n";
			cin>>verifica;
			
			while(verifica!=1 and verifica!=0)
			{
				cout<<"OPCAO INVALIDA! \nDigite uma opcao valida: \n";
				cin>>verifica;
			}
		}
	}
	/****************FUNCAO EXCLUIR*********************/
	void excluir(Carro vetor[], int &tam, int &controle, int &posBuscado)
	{
		string buscado;
		cout<<"Digite a placa registrada para excluir o cadastro: \nPLACA: ";
		cin>>buscado;
		
		//Chamada da função de busca para saber a posicao do elemento digitado
		busca(vetor, 0, controle, buscado, posBuscado);
		
		if(vetor[posBuscado].placa == buscado)
		{
			vetor[posBuscado].placa="-1";
			vetor[posBuscado].modelo="-1";
			vetor[posBuscado].marca="-1";
			vetor[posBuscado].ano=-1;
			vetor[posBuscado].descricao="-1";
			cout<<"Exclusao executada com sucesso!\n\n";
		}
		else
			cout<<"Placa digitada nao encontrada!\n\n";
	}

    /****************FUNCAO EXIBIR*********************/
	void listar(Carro vetor[], int &tam, int &controle)
	{
		if(controle!=0)
		{
			cout<<"Listagem dos elementos abaixo:\n";
			cout<<"Placa\tNome\tMarca\tAno\tDescricao\n";
			for(int indice=0; indice<controle; indice++)
			{
				cout<<vetor[indice].placa<<"\t";
				cout<<vetor[indice].modelo<<"\t";
				cout<<vetor[indice].marca<<"\t";
				cout<<vetor[indice].ano<<"\t";
				cout<<vetor[indice].descricao<<endl;
			}
		}
		else
			cout<<"Nenhum cadastro realizado\n\n";
	}
  
    /***************FUCAO ALTERAR**********************/
	void alterar(Carro vetor[], int &controle, int &posBuscado)
	{
		string procurado;
		cout<<"Digite a placa que deseja modificar os dados do cadastro\nPLACA: ";
		cin>>procurado;
		
		//Chamada da função de busca para saber a posicao do elemento digitado
		busca(vetor, 0, controle, procurado, posBuscado);
		
		cout<<"Dados a serem alterados:\n";
		cout<<vetor[posBuscado].placa<<"\t";
		cout<<vetor[posBuscado].modelo<<"\t";
		cout<<vetor[posBuscado].marca<<"\t";
		cout<<vetor[posBuscado].ano<<"\t";
		cout<<vetor[posBuscado].descricao<<endl;
		
		cout<<endl;
		cout<<"Digite os dados do novo Cadastro: \n\n";
		cout<<"Digite a placa:\n";
		cin>>vetor[posBuscado].placa;
		cout<<"Digite o nome:\n";
		cin>>vetor[posBuscado].modelo;
		cout<<"Digite a marca:\n";
		cin>>vetor[posBuscado].marca;
		cout<<"Digite o ano:\n";
		cin>>vetor[posBuscado].ano;
		cout<<"Digite a descricao:\n";
		//cin>>vetor[posBuscado].descricao;
		cin.ignore();
		getline(cin, vetor[posBuscado].descricao);
		
		cout<<"Cadastro alterado com Sucesso.\n\n";
	}
    /****************FUNCAO ORDENAR*********************/
	void merge (Carro *S, int inicio, int fim)
	{
	    int meio;
	    if (inicio < fim){
	     
	        meio = (inicio + fim) / 2;
	        merge (S, inicio, meio);
	        merge (S, meio +1, fim);
	        mergeAll (S,inicio,meio,fim);
	        
	    }   
	}
	void mergeAll(Carro *arr, int inicio, int meio, int fim) {
	  
	  
	   int t_S1 = meio - inicio + 1; //inicio + meio; //vet S1
	   int t_S2 = fim - meio;        //(meio+1) + fim; //vet S2
	   
	  
	  Carro *S1 = new Carro[t_S1];
	  Carro *S2 = new Carro[t_S2];
	
	  for (int i = 0; i < t_S1; i++)
	    S1[i].placa = arr[inicio + i].placa;
	  for (int j = 0; j < t_S2; j++)
	    S2[j].placa = arr[meio + 1 + j].placa;
	
	  int i, j, k;
	  i = 0;
	  j = 0;
	  k = inicio;
	
	  while (i < t_S1 and j < t_S2) {
	    if (S1[i].placa <= S2[j].placa) {
	      arr[k].placa = S1[i].placa;
	      i++;
	    } else {
	      arr[k].placa = S2[j].placa;
	      j++;
	    }
	    k++;
	  }
	  while (i < t_S1) {
	    arr[k].placa = S1[i].placa;
	    i++;
	    k++;
	  }
	
	  while (j < t_S2) {
	    arr[k].placa = S2[j].placa;
	    j++;
	    k++;
	  }
	  delete [] S1;
	  delete [] S2;
	  S1 = NULL;
	  S2 = NULL;
	}
