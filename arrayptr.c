#include <stdio.h>
#include<stdlib.h>
#define N 5
#define M 5
/*creare un'array di puntatori di stringhe, inizializzarlo, e stampare il proprio nome senza la prima lettera e poi con solo la prima lettera*/

int inserisci(char *[N] );

int main(){
    char *esempio[N]= {"Vincenzo", "Giovanni", "Francesco", "Antonio", "Giuseppe"};
    char *array[N];
    
    int n= inserisci(array); //inserisce le parole nell'array
    for(int i=0; i<n; i++)
    printf("%s", array[i]);

    for(int j=0; j<n; j++) //libera la memoria per ogni posizione dell'array
    free(array[j]);

   return 0;

}

int inserisci( char *array[N])
{/*Serve l'allocazione dinamica*/
    int i, j;
    char str;
    printf(" inserisci la quantità di parole");

     scanf("%d", &i);

    for( j=0 ; j<i; j++){
    array[j]=calloc(i, sizeof(char) );
    if(!array) //nel caso l'allocazione dovesse fallire
        exit (1);

        scanf("%s", array[j]);
           
    }
    return i;
}