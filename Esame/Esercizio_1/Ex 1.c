/*Creare una funzione che accetti in input un array di interi e 
restituisca la media in double degli elementi contenuti. 
* Stampare a console la media di un array che contenga i primi 100 
* numeri interi divisibili per 3. (ovveri: 3, 6, 9, …).*/

#include <stdio.h>
#include <stdlib.h>

void init(int a[]) {
	for(int idx=0; idx < 100; ++idx){
		a[idx]= (idx+1) * 3;
	}
	for(int i = 0; i<100;++i){
		printf("Array [%d] = %d\n",i, a[i]);
	}
}
			
double avg(int a[]){
	double somma=0;
	for(int idx=0;idx<100;++idx){
		somma+=a[idx];
	}
	double risultato = somma/100;
	return risultato;
		
}
	
	
int main(){
	int a[100];
	init (a);
	printf("media =%f", avg(a));
	return 0;
}
	
	
//calcolaMedia(interi, sizeof(interi)/sizeof(int))
