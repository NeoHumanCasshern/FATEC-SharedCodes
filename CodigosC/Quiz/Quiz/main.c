#include <stdio.h>
#include <stdlib.h>

int fogo=0,agua=0,planta=0;

void main()
{
    //Iniciando as variavies
    int opcao;

    //Iniciando a interface grafica
    printf("\tQuiz dos Knights!\n");
    printf("\t================\n\n");
    printf("\tQual Pokemon inicial voce deve escolher!\n");
    printf("\t========================================\n\n");


    printf("Você é menino ou menina\n");
    printf("1 - Boy\n");
    printf("2 - Girl\n");
    opcao = getchar();
    fflush(stdin);

    printf("Escolha um champion do League of Legends:\n");
    printf("1 - Yasuo\n");
    printf("2 - Master Yi\n");
    printf("3 - Urgot\n");
    opcao = getchar();
    fflush(stdin);
    fazerEscolha(opcao);

    printf("Um Heroi dos Vingadores:\n");
    printf("1 - Homem de Feroo\n");
    printf("2 - Capitao America\n");
    printf("3 - Hulk\n");
    opcao = getchar();
    fflush(stdin);
    fazerEscolha(opcao);

    printf("Uma produtora de jogos:\n");
    printf("1 - Sony\n");
    printf("2 - Nintendo\n");
    printf("3 - XBox (Microsof)\n");
    opcao = getchar();
    fflush(stdin);
    fazerEscolha(opcao);

    printf("Um OS para Smartphone:\n");
    printf("1 - Android\n");
    printf("2 - iOS\n");
    printf("3 - Windows Phone\n");
    opcao = getchar();
    fflush(stdin);
    fazerEscolha(opcao);

    if (planta > agua && planta > fogo){
        printf("Escolhe o bulbasauro e se mata, VC EH UM LIXO!\n");
    } else {
        if (agua > fogo && agua > planta){
            printf("Escolhe o squirtle, voce nao fede nem cheira...\n");
        } else{
            printf("Escolhe o charmander, VC EH UM HEROI!!! PROVAVELMENTE SEU NOME EH JOHN!!!\n");
        }
    }
}

void fazerEscolha(opcao){
    switch (opcao){
        case '1':
            fogo += 1;
            break;
        case '2':
            agua += 1;
            break;
        case '3':
            planta += 1;
            break;
    }
}
