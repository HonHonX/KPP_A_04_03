#include <stdio.h>
#define PI 3.141592653589793

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
  

	
