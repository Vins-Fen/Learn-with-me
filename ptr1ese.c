#include <stdio.h>
#include <string.h>
//questo file fa il quadrato di un numero
void quadrato(int *); // inidichiamo nel prototipo che passiamo un puntatore
 
int main(void) {
    int a=0;
    printf("Inserisci un numero: ");
    scanf("%d",&a); 
    quadrato(&a); //passiamo l'indirizzo dell'intero alla funzione creata da noi
    printf("%d\n",a);
}
 
void quadrato(int *a) { // qui ci sarà un indirizzo che PUNTA ad un valore
    *a=*a * *a;// con * diciamo al computer di voler moltiplicare il valore di a e non l'indirizzo
}