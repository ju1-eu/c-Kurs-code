/*
  ju 8-Mrz-20 Return.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Return Type: void
// Name: print_isZahl_teilbar
// Parameters: int number
// Declaration
void print_isZahl_teilbar(int number);

// Return Type: int
// Name: Eingabe_Zahl_User
// Parameters: None
// Declaration
int Eingabe_Zahl_User();

int main()
{
  int i = Eingabe_Zahl_User(); // 0xAA: 12
  print_isZahl_teilbar(i);

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

// Definition
int Eingabe_Zahl_User()
{
  int number_from_user; //0x00: 12

  printf("Pls enter a interger number!\n");
  scanf("%d", &number_from_user);

  return number_from_user; // return 12;
}