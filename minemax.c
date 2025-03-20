#include <stdio.h>

int main (){
    int n=0, count, min=0, max=0; //inizializzo

    printf("Quanti numeri vuoi inserire?");
    scanf("%d",&count); // utente immette quanti numeri inserire

    for(;count>0; count--){ 
    printf("Inserisci i numeri:");
    scanf("%d",&n);
     if((min==0) && (max==0)){ //per confrontare il minimo e il massimo al primo step devo inizializzarli con un valor ≠ da 0
     min=n ;
     max=n ;
     }
    
     else{
        if (n>max) max=n ; //confronto
        if (n<min) min=n ; //confroto

     }
    }

     printf("Il max è: %d e il min è: %d", max, min);
}