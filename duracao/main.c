#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos=0, minutos=0, horas=0;

    printf ("Digite um tempo em segundos: ");
    scanf ("%d", &segundos);


    horas = segundos / 3600;
    segundos = segundos - (horas * 3600);
    minutos = segundos / 60;
    segundos = segundos - (minutos * 60);

    printf ("%d:%d:%d\n", horas, minutos, segundos);


    return 0;
}
