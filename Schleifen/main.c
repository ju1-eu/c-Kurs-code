/* 
	ju 8-Mrz-20 Main.c
	Programmierübung 3
	
	- generiere folgenden Output
	- mit Hilfe verschachtelten for-schleifen u. if Abfragen

	<         ^       ^       ^       ^     >       
	<       (1,1)   (1,2)   (1,3)   (1,4)   >
	<       (2,1)   (2,2)   (2,3)   (2,4)   >
	<       (3,1)   (3,2)   (3,3)   (3,4)   >
	<       (4,1)   (4,2)   (4,3)   (4,4)   >
	<         v       v       v       v     >
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	/*
	// Lösung
	// 6 * 6 = 36 
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(j == 5)
				printf(">\n");
			else if(j == 0)
				printf("<\t");	
			else if(i == 0)
				printf("  ^\t");
			else if(i == 5)
				printf("  v\t");
			else
				printf("(%d,%d)\t", i, j);
		}
	}
	*/
	// 6 * 6 = 36
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (j == 5)
				printf("\n");
			else if (j == 0)
				printf("");
			else if (i == 0)
				printf("");
			else if (i == 5)
				printf("");
			else
				printf("(%d,%d)\t", i, j);
		}
	}

	return 0;
}
/* 
	Konsolen-Output:
	(1,1)   (1,2)   (1,3)   (1,4)
	(2,1)   (2,2)   (2,3)   (2,4)
	(3,1)   (3,2)   (3,3)   (3,4)
	(4,1)   (4,2)   (4,3)   (4,4)
*/
