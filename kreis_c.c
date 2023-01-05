#include <stdio.h>
#include "kreisberechnung.h"

//Hauptprogramm
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
  
  //Berechnung
 
	ausgabeErgebnis(eingabeZahl());
  
  //Ende
	return 0;
}
