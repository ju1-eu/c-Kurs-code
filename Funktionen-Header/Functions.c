/* 
	ju 8-Mrz-20 Functions.c
	
*/
#include <stdio.h>

// Return Type: void
// Name: print_isZahl_teilbar
// Parameters: int number
// Declaration
void print_isZahl_teilbar(int number);

int main()
{
  // Declaration + Init.
  int i = 12;

  // Name: print_isZahl_teilbar
  // Arguments: i
  print_isZahl_teilbar(i);
  print_isZahl_teilbar(13);
  print_isZahl_teilbar(5);
  print_isZahl_teilbar(20);

  return 0;
}

// Definition
void print_isZahl_teilbar(int number)
{
  if ((number % 2) == 0)
  {
    printf("Zahl ist teilbar!\n");
  }
  else
  {
    printf("Zahl ist unteilbar!\n");
  }
}