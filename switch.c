#include <stdio.h>

int main (){

double a, b;
char c;

printf("Inserisci l'operatore:");
scanf("%c", &c);
printf("inserisci due numeri");
scanf("%lf %lf", &a, &b);


switch (c) {
    case ('+'): 
        printf("%lf è il risultato",a+b);
        break;
    case ('-'): 
        printf("%lf è il risultato", a-b);
        break;
    case ('*'): 
        printf("%lf è il risultato", a*b);
        break;
    case('/'): 
    if (b==0)
    printf("non posso farlo");
        printf("%lf è il risultato",a/b);
        break;
}


return 0;
}


