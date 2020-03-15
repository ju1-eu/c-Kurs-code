/* ju  26-Dez-18  bitweisesODER-v02.c 
   bitweises ODER (|)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	char *msg = "bitweises ODER |\n\n";
  char buffer[100];
	// unsigned int - 16-bit - 0 … 65535
	unsigned int E1 = 12;  // 0b0000.1100 = 12
  unsigned int E2 = 4;   // 0b0000.0100 = 4
	unsigned int oder  = E1 | E2;

	printf("%s",msg);

  char *tblKopf = "Op;   DEZ;   HEX;   BIN\n";
	printf("%s",tblKopf); 
	//     "Op;   DEZ;   HEX;   BIN\n"
	printf("E1;   %3d;   %3x;   %s\n", E1, E1, itoa(E1, buffer, 2));
	printf("E2;   %3d;   %3x;   %s\n", E2, E2, itoa(E2, buffer, 2));
	printf("ODER; %3d;   %3x;   %s\n", oder, oder, itoa(oder, buffer, 2));
  return 0;
}
/* Ausgabe

*/

