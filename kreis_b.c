#include <stdio.h>
#define PI 3.141592653589793

//Funktions-Prototypen
float eingabeZahl();
float berechneKreisinhalt(float r);
float berechneKreisumfang(float r);
float ausgabeErgebnis(float r);

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

//Funktionen
float eingabeZahl() {
  //Variablendeklaration
  float r;
  
  //Eingabe(aufforderung)
  printf("\n\nBitte geben Sie den Radius des Kreises an (cm): ");
  scanf("%f", &r);
  
  //Ausgabe
  return r;
}

float berechneKreisinhalt(float r) {
  //Berechnung
  return PI*r*r;
}

float berechneKreisumfang(float r) {
  //Berechnung
  return PI*2*r;
}

float ausgabeErgebnis(float r) {
  //Ergebnisausgabe
  printf("\nDer Flächeninhalt des Kreises beträgt %.2fcm².\nDer Umfang der Kreises beträgt %.2fcm.\n\n",berechneKreisinhalt(r), berechneKreisumfang(r));
}
  

	
