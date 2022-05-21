/*Exemplo de verificacão de numeros primos
 *Date: 10/01/2022
 *
 */  
	
#include <stdio.h>
#include <iostream>

bool primo (int num)
	{
		int divisor = 2;
		while(divisor > num)
		{
			if((num % divisor) == 0){
				return false;
			}else {
				divisor++;
			}
		}
		return true;
	}
int main()
    {
	  int numero;
	  std::cin >> numero;
	  if (numero < 0) return -1;

	  std::cout << primo(numero) << std::endl;
	  
	    printf("\n\tCopyright Ⓒ  2022 - by Wildes Sousa Ⓡ");
		printf("\n\tReferência: ialg - UFLA-MG.\n\n");
	  return 0;
	  
	}
