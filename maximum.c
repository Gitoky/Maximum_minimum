#include <stdio.h>
#include <stdlib.h>

int main(){

	int taille;
	printf("Entrer un taille de tableau: ");
	scanf("%d", &taille);

	int tableau[taille];
	for(int i = 0; i <= taille; i++){
		printf("Entrer une valeur: ");
		scanf("%d", &tableau[i]);
	}

	int max = tableau[0];
	int min = tableau[0];

	for (int i = 1; i < taille; i++){
		if(tableau[i] > max){
			max = tableau[i];
		}
		if(tableau[i] < min){
			min = tableau[i];
		}
	}

	printf("\n ============ \n");

	printf("La valeur Maximale (max) est de %d \n", max);
	printf("La valeur Minimale (min) est de %d \n", min);
	
	return 0;
}
