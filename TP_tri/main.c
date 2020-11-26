#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"


int main(){
	int ref[]  = {3,6,6,7,8,10,14,15,17,19,20,21,23,25,26,28,28,28,32,32,34,35,38,38,39,43,44,46,48,49,50,58,59,62,64,65,69,71,75,79,79,79,81,84,86,89,92,93,97,99};
	int tab1[] = {14,15,92,65,35,89,79,32,38,46,26,43,38,32,79,50,28,84,19,71,69,39,93,75,10,58,20,97,49,44,59,23,7,81,64,6,28,62,8,99,86,28,3,48,25,34,21,17,6,79};
	int tab2[] = {99,97,93,92,89,86,84,81,79,79,79,75,71,69,65,64,62,59,58,50,49,48,46,44,43,39,38,38,35,34,32,32,28,28,28,26,25,23,21,20,19,17,15,14,10,8,7,6,6,3};
	int tab3[] = {3,6,6,7,8,10,14,15,17,19,81,21,23,25,26,28,28,28,32,32,34,35,38,38,39,43,44,46,48,49,50,58,59,62,64,65,69,71,75,79,79,79,20,84,86,89,92,93,97,99};
	int n = sizeof(ref)/sizeof(int);
	int nombre1 = 3;
	int compteur = 0;
	int nombre2 = 8;
	int tab4[] = {1,2,9};
	int tab5[] = {4,5,6};
	merge(tab5, tab4, 0,0 ,2, &compteur);
	affiche(tab4, 6);
	printf("affiche resultat MergeSort \n");
	MergeSort(ref, n);
	printf("\n %d \n", compteur);
	affiche(tab1, n);
	swap(&nombre1, &nombre2);
	printf("%d %d \n \n", nombre1, nombre2); 
	printf("il y a eu %d comparaisons \n",  InsertionSort(tab3, n));
	affiche(tab1, n);
	affiche(ref, n);
	return 0;
}


