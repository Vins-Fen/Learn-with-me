#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * concatena( char*, char *, int *, int *);
int main ()
{
    char string1[]= {"Vincenzo"}, stringa[100], *newvect;
    int *dimnewvect, *dimvectinput;
    printf("Inserisci una nuova stringa (max 99 char)\n");
    scanf("%s",stringa);
    newvect= concatena( string1, stringa, &dimnewvect, &dimvectinput); /* Chiamata: dà v3*/
    
    printf(" Le stringhe %s e %s concatenate originano la stringa %s che è lunga %d, mentre la seconda è lunga %d\n", string1, stringa, newvect, dimnewvect, dimvectinput);

    free(newvect);
    return 0;
}

char * concatena( char v1[], char v2[], int *dimnewvect, int *dimvectinput){
    char *v3;
    v3= calloc(strlen(v1) + strlen(v2) + 1, sizeof(char)); /* La quantità di spazio necessaria viene allocata dinamicamente */
    strcpy(v3, v1);
    strcat(v3, v2);
    *dimvectinput= strlen(v2);
    *dimnewvect= strlen(v3);
    return(v3); /* L'output di questa funzione sarà un puntatore del risultato della concatenazione, da assegnare al programma chiamante*/
}

/*Qui è possibile vedere l'uso di puntatori di interi e di stringhe
l'utilizzo della memoria dinamica e l'uso della libreria string.h (strlen, strcpy e strcat)*/