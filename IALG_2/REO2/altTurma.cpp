/* Questão 7: Estrutura de repetição - Altura da turma
 * copyright © 2022, by Wildes Sousa 
 * version: 1.22.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{

	unsigned int ficha;
       	int i, i_masc, i_fem; // contadores
	cin >> ficha;

	float soma_alt_turma = 0;
	float somaM_alt_turma = 0;
	float somaF_alt_turma = 0;
	float alt_maior = 0;          
	float alt_menor = -1;
	float alt_turma;
	char genero;
	
	i = 0;
	i_fem = 0;
	i_masc = 0;
	while (i < ficha )
	{
		cin >> alt_turma;
		cin >> genero;
		
		if ( alt_turma > alt_maior){	
			 alt_maior = alt_turma;
		}else
			alt_menor = alt_maior;
		if (alt_turma < alt_menor and alt_maior > alt_menor){
			alt_menor = alt_turma;
		}

		switch (genero)
		{
			case 'm':
				somaM_alt_turma += alt_turma;
				i_masc++;
				break;
			case 'f':
				somaF_alt_turma += alt_turma;
				i_fem++;
				break;
				
		}


		soma_alt_turma += alt_turma;
		i++;
	}
	
	cout << endl;
	cout << alt_maior << "\n" 
	     << alt_menor << "\n";
	if (somaF_alt_turma == 0){ 
		cout << "erro" << "\n" 
	     	     << somaM_alt_turma / i_masc << endl;
	}
	else if (somaM_alt_turma == 0){ 
		cout << somaF_alt_turma / i_fem << "\n"  
	     	     << "erro" << endl;
	}else
		cout << somaF_alt_turma / i_fem << "\n"
		     << somaM_alt_turma / i_masc <<endl;
	cout << (soma_alt_turma / i) << endl;

        return 0 ;
}


