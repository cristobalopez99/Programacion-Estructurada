#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Elige una de las tres situaciones como si estuvieras en el mundo de hielo y fuego \n");

    int opt;

    printf("Escribe 1 si quieres ir a Kings landing \n");


    printf("Escribe 2 si quieres ir a Dragonstone \n");


    printf("Escribe 3 si quieres ir a la Nigths Watch \n");

    scanf("%i", &opt);

    switch(opt) {
    case 1:
        printf("Vaya, te gusta el desorden y el bullicio, iras a Kings Landing");
        break;
    case 2:
        printf("Eres de los que les gusta el fuego y el azufre, me gusta, iras a Dragonstone");
        break;
    case 3:
        printf("Asi que te gusta seguir oredenes y que se te congele todo el cuerpo, pues iras al muro");
        break;
    default:
        printf("Elige un numero valido");
        break;
    }




    return 0;
}
