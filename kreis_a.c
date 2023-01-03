#include <stdio.h>
#define PI 3.141592653589793

int main () {
  /*
  * Dieses Programm soll den Radius eines Kreises einlesen und darauf basierend dann den Flächeninhalt + Umfang berechnen und ausgeben
  */
  
  //Programmtitel
  printf("\n ****************************************** ");
	printf("\n *   ^,,,,^   *                           * ");
	printf("\n *  ( o x o)  * Kreisflächeninhalt+Umfang * ");
	printf("\n *  ( 7   7)  *                           * ");
	printf("\n *   ´´´´´´   *                ©S.Buch    * ");
	printf("\n ****************************************** \n\n");
  
  //Deklaration der Variablen
  float r;

  //Eingabe des Radius
	printf("\n\nBitte geben Sie den Radius des Kreises an (cm): ");
	scanf("%f", &r);
	printf("\nDer Flächeninhalt des Kreises beträgt %8.2fcm².\n Der Umfang der Kreises beträgt %fcm.\n\n",PI*r*r, PI*2*r);
  
  //Ende
	return 0;
 
}
