/* MATRICE e matrice trasposta
        come si usano gli array bidimensionali*/

#include <stdio.h>
#define N 3 /* Definisco N per le righe e le colonne, creo una matrice 3x3*/
void trasponimatrice(int matrice [][N]); /* L'Array biddimensionale è OBBLIGATORIO mettere la definizione della quantità */
void stampamatrice(int matrice[N][N]); 
int main ()
{
    int matrice [N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }; /*esempio particolare*/

    printf("Matrice Originale:\n");
    stampamatrice(matrice);/* Chiamata */

    trasponimatrice(matrice);/* Chiamata */

    printf("\nMatrice transposta:\n");
    stampamatrice(matrice);/* Chiamata */

    return 0;
}

void stampamatrice( int matrice[N][N]){ /*NON DEVE RESTITUIRE NULLA, solo stampare*/

int i=0, j;
for(i=0; i<N; ++i){ /*Finché i<N e j<N stampami tutto*/
    for(j=0;j<N; ++j ){
        printf("%d\t", matrice[i][j]);
    }
        printf("\n");
 }

}

void trasponimatrice(int matrice [N] [N]){
    /*i,j indici, temp è il salvataggio della variabile*/
    int i=0, j, temp;
for(i=0; i<N; ++i){     /*Finché i<N e j<N spostami l'ordine da riga a colonne e viceversa*/
    for(j=i+1;j<N; ++j ){
        
        temp= matrice[i][j]; /* salvo in temp matrice [i][j]*/
        matrice [i][j]=  matrice [j][i]; /* La riga diventta la colonna*/
        matrice [j][i]= temp; /* La colonna diventa la riga*/
    }
        printf("\n");
 }


}