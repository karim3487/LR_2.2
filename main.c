/*Вычислить значение функции D=(e^(-1/6)*√(a^2+ln⁡|b| )-tga)/(〖2cos〗^2 a^3 )*/


#include <stdio.h>
#include <math.h>
#include <locale.h> /*библиотека языков*/

int main()
{
    setlocale(LC_ALL, "Rus");/*подключение русского языка*/
    double a , b , D, k, z;
    do
    { printf("a=");
        fflush(stdin);
    } while (scanf("%lf" , &a) != 1); /*безопасный ввод*/
    do
    {
        printf("b=");
        fflush(stdin);
    } while (scanf("%lf" , &b) != 1); /*безопасный ввод*/
    k = sqrt(pow(a, 2)+logf(fabs(b))); /*вспомогательная переменная*/
    z = 2*pow(cos(pow(a, 3)), 2); /*вспомогательная переменная*/
    if(a>=0 &&  z != 0 && b != 0){ /*проверка на ООФ*/
        D = ((exp(-1/6)*k-tan(a)*pow(10,6))/z); /*вычисление D*/
        printf("D=%lf", D);
    } else
        printf("Не принадлежит ОДЗ"); /*сообщение*/
    return 0;
}
