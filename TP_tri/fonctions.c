#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"




void affiche(int* a, int n){
	int i;
	for (i = 0 ; i < n ; i++){
		printf("%d ", a[i]);
	}
	printf("\n\n");
}


int compare(int* a, int *b, int n){
	int i;
	for(i=0; i < n ; i++){
		if (a[i] != b[i]){
			printf("Comparison FAILED at index %d\n\n", i);
			return i;
		}
	}
	printf("Comparison OK\n\n");
	return -1;	
}

void swap (int *pointeur_var1, int* pointeur_var2) {

	int variable_temp = *pointeur_var1;
	*pointeur_var1 = *pointeur_var2;
       	*pointeur_var2 = variable_temp;	
}

int BubleSort (int *tableau, int taille_tableau){
	int indice;
	int compteur = 0;
	int indice1;	
	for (indice = 0; indice < taille_tableau; indice++)
	{
		for(indice1 = 0; indice1 < taille_tableau-1; indice1++)
		{
		
			if(tableau[indice1] >  tableau[indice1+1])
			{
			swap(tableau + indice1, tableau + indice1 + 1);
			compteur++;
			}
		}
			
	}
	return compteur;

}

int InsertionSort (int *tableau, int taille_tableau)
{
	int indice;
	int indice2;
	int compteur;
	for (indice = 1; indice < taille_tableau; indice++)
	{
		for (indice2=0; indice2 < indice; indice2++)
		{
			if (tableau[indice] < tableau[indice2])
			{
				swap(tableau + indice, tableau + indice2);
				compteur++;
			}
		}

	}

return compteur;
}


/* La fonction merge permet de faire : tmp + tab */

void merge (int* tab, int* tmp, int left, int mid, int right, int* cnt)
{
	int indice;
		for(indice = left; indice < right+1; indice ++)
		{
			tmp[indice + right-mid +1] = tab[indice]; //permet de mettre les elements du tableau tab à la suite du tableau tmp
			*cnt++;
			
		}
}




int MergeSort (int *tableau, int taille_tableau)
{
	int *tableau_temporaire = NULL;
	tableau_temporaire = malloc (taille_tableau * sizeof(int));
	if (tableau_temporaire == NULL)
	{
		printf("Erreur lors de l'allocation mémoire");
	}
	else
	{
		int indice;
		for (indice = 0; indice < taille_tableau/2; indice++)
		{
				merge(tableau + indice, tableau_temporaire + indice, 0, 0, 1, NULL);
		}
		affiche(tableau_temporaire, taille_tableau);
		free(tableau_temporaire);
	}



}
