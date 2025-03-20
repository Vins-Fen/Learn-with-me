#include <stdio.h>

 int massimo( int, int, int ); /* prototipo di funzione */

 int main()
 {
 int a, b, c;

 printf( " Inserisci tre interi:" );
 scanf( "%d%d%d", &a, &b, &c );
 printf( "Il massimo è: %d\n", massimo( a, b, c ) );/*Chiamata*/

 return 0;
 }

 /* definizione della funzione massimo */
 int massimo( int x, int y, int z )
 {
 int max = x;

 if ( y > max )
 max = y;

 if ( z > max )
max = z;

 return max;
 }