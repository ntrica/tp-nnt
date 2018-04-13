
#include<stdio.h>
#include<stdlib.h>
#include "fun.h"


int pedir_y_leer_numero(void)
{

int numeroUno;
do
{
    printf("\n Tipee un numero:\n");
    fflush(stdin);

 }while(scanf("%d",&numeroUno)==0);

return  numeroUno;
}

int sumar(int numero1, int numero2)
{
    int resultado;
    fflush(stdin);
    resultado=numero1+numero2;

    return resultado;
}


int restar(int numero1,int numero2)
{
    int resta;
    resta=numero1 - numero2;
    return resta;

}

int multiplicar(int numero1,int numero2)
{
    int multiplica;
    multiplica=numero1 * numero2;
    return multiplica;
}


float dividir(int numero1,int numero2)
{
    float division;
    if(numero2 != 0)
    {
        division=(float) numero1 / numero2;
    }
    else
    {
        printf("Ingrese un numero distinto de 0\n\n");
    }
    return(division);
}



float factorial(int numero1)
{
    int i;
    numero1=(int)numero1;
    float result=1;


     for(i=numero1;i>1;i--)
       {
         result=result*i;
       }

    return result;
}
