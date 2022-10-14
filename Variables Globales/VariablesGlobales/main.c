#include <stdio.h>
#include <stdlib.h>

char name[50];
float note;

float NotePass() {
    if(note >= 70)
    {
        printf("Hola, %s haz PASADO la nota con: %f puntos", name, note);
    } else if(note < 70)
    {
        printf("No haz pasado la nota, quiere decir que REPROBASTE con: %f puntos", name, note);
    }
}
int main(void)
{
    printf("Escribe tu nombre bro': \n");
    scanf("%s", name);
    do {
        printf("Escribe tu nota: \n");
        scanf("%f", note);
    } while((note < 0) || (note > 100));

    NotePass();


    return 0;
}
