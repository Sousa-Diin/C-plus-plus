/* date: 24/01/2022
 * version: 3.0
 * copyright © 2022, by Wildes Sousa
*/
#include <iostream>

int main()
{
        int serie_P, serie_C = 0;
        std::cin >> serie_P;

        if ( serie_P < 7)
        {
                 serie_C = 1;//imprimi "1" para produtos de 1 a 6
        }
        else{
                serie_C = serie_P;
                if (serie_C % 2 == 0 and serie_P >=7 and serie_C % 6 == 0 )//Linha c/ ERRO!
                        serie_C = (serie_C / 6 );
                else
                {
                        serie_C = ( serie_P / 6 );
                        serie_C ++;
                }
        }
        std::cout << serie_C << std::endl;
        return 0 ;
}

