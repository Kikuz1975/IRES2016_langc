/*Implementare una funzione, denominata zip, che dato due array di interi 
a e b della stessa lunghezza crei un terzo array che contenga i valori dei
*  precedenti array intervallati tra di loro (partendo dal primo elemento 
* dell’array a). Esempio (in pseudocodice):

a = [1,7,9,4]
b = [4,5,6,9]
Risultato array:
risultato: [1,4,7,5,9,6,4,9]

Testare la funzione creando un array contenente i primi 100 numeri 
* interi pari [0,2,4,6,8,...] e un array contenente i primi 100 numeri interi 
* dispari [1,3,5,7,9,11,13,...]. Stampare a console l’array risultate dalla chiamata 
* alla funzione zip.*/

#include <stdio.h>
#include <stdlib.h>

void zip(int pari[], int dispari[], int lungh) {
	
	int arrayFinale[2 * lungh];

	for (int i = 0; i < 2*lungh; ++i) {
		if (i % 2 == 0) {
			arrayFinale[i] = pari[i / 2];
		} else {
			arrayFinale[i] = dispari[(i - 1) / 2];
		}
	}
	for(int i = 0; i < 2 * lungh; ++i) {
		printf("%d\n", arrayFinale[i]);
	}
	printf("\n");
}

	
int main(){
	int a[100];//array pari
	int b[100];//array dispari
	
	// verifico lunghezza array
	int lungh = sizeof(a)/sizeof(int);

	// creo un array pari
	for (int i = 0; i < lungh; ++i) {
		a[i] = i * 2;
	}
	// creo un array dispari
	for (int i = 0; i < lungh; ++i) {
		b[i] = (i * 2 )+ 1;
	}
	
	//chiamo la funzione zip e passo le array e la lunghezza...
	zip(a, b, lungh);
	
	return EXIT_SUCCESS; // 0
	}
