#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[30];
    char nome2[30];
    float idade1, idade2, mediaIdade;

    printf ("Qual o nome da primeira pessoa? ");
    scanf ("%s", &nome1);
    printf ("\n");
    printf ("Qual a idade de %s? ", nome1);
    scanf ("%f", &idade1);
    printf ("\n");
    printf ("Qual o nome da segunda pessoa? ");
    scanf ("%s", &nome2);
    printf ("\n");
    printf ("Qual a idade de %s? ", nome2);
    scanf ("%f", &idade2);
    printf ("\n");
    mediaIdade = (idade1 + idade2)/2;
    printf ("A media das idade de %s e %s e: %.1f", nome1,nome2, mediaIdade);
    return 0;
}
