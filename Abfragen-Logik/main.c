/* 
	ju 6-Mrz-20 Main.c
	Programmierübung:
	1. if-else-Abfrage, prüfe ob eine ganze Zahl durch 3 teilbar ist
	2. Beide Fälle ausgeben.
	3. Den Modulo Rest ausgeben

	a % 3 == 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	unsigned int number;
	unsigned int mod_rest = number % 3;

	printf("Bitte eine ganze zahl eingeben!\n");
	scanf("%d", &number);

	if(mod_rest == 0)
		printf("Number ist durch 3 teilbar!");
	else
		printf("Number ist nicht durch 3 teilbar!");

	printf("Modulo-Rest: %d", mod_rest);

  return 0;
}

