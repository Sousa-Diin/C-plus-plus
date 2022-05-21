/* Questão 2: Operações básicas - Salario a receber
 *
 * copyright (c) 2022 Wildes Sousa
 */
#include <iostream>

int main()
{
	double salario_M, salario_B;// desconto;
   	int num_Hora_T; 
	//Entrada de dados
	std::cin >> salario_M >> num_Hora_T;

	//Processamento...
	 
	/* Calcula o valor da horas trabalada e mult. pelas num_Hora_T*/
    salario_B = ((float)num_Hora_T * (float)( salario_M * 0.05)); 
	
	//Saida de dados
	
	/*desconto do imposto */
	std::cout << (salario_B - (0.23 * salario_B)) << std::endl;

	return 0;
}
