#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Programa explicativo de repedições
    usando o while*/

    //Declarando a variavel controladora
    int i = 0;

    //Declarando a variavel de repeticoes
    int numero;

    //Recebendo do usuario o numero de repetições
     printf("Quantas repeticoes deseja fazer?");
     scanf("%d",&numero);

    //Estrutura basica do while sendo:
	//"i" a variavel controladora e,
	//"numero" o numero de repeticoes, inserido pelo usuario
    while (i<numero){

        printf("FATEC - %d!\n",i+1);

        //incremento da variavel controladora
        i++;
    }

}
