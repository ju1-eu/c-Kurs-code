/*
  ju 8-Mrz-20 Datentypen.c
  https://www.tablesgenerator.com/markdown_tables

  | Datentyp           | Byte | Bit |               Wertebereich |
  | ------------------ | ---: | --: | -------------------------: |
  | unsigned char      |    1 |   8 |                  0 bis 255 |
  | char               |    1 |   8 |               -128 bis 127 |
  | unsigned int       |    4 |  32 |            0 bis 4.29e+009 |
  | int                |    4 |  32 | -2147483648 bis 2147483647 |
  | unsigned long      |    4 |  32 |            0 bis 4.29e+009 |
  | long               |    4 |  32 | -2147483648 bis 2147483647 |
  | unsigned long long |    8 |  64 |            0 bis 1.84e+019 |
  | long long          |    8 |  64 |   -9.22e+018 bis 9.22e+018 |
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Return Type: void
// Name: Datentyp_unsigned, Datentyp_signed
// Parameters: char *msg
// Declaration
void Datentyp_unsigned(char *msg);
void Datentyp_signed(char *msg);

int main()
{
  printf("Datentypen in C\n");
  printf("\t     Typ; Byte; Bit; Wertebereich\n");
  Datentyp_unsigned("unsigned char");
  Datentyp_signed("char");
  Datentyp_unsigned("unsigned int");
  Datentyp_signed("int");
  Datentyp_unsigned("unsigned long");
  Datentyp_signed("long");
  Datentyp_unsigned("unsigned long long");
  Datentyp_signed("long long");

  return 0;
}
// Definition
void Datentyp_unsigned(char *msg)
{
  unsigned char a = 1;
  unsigned int b = 1;
  unsigned long c = 1;
  unsigned long long d = 1;

  unsigned int byte;
  unsigned int bit;
  double max;
  double min;

  if (msg == "unsigned char")
    byte = sizeof(a);
  else if (msg == "unsigned int")
    byte = sizeof(b);
  else if (msg == "unsigned long")
    byte = sizeof(c);
  else if (msg == "unsigned long long")
    byte = sizeof(d);
  else
    printf("Fehler! Datentyp angeben.");

  bit = byte * 8;
  // unsigned
  max = pow(2, bit) - 1; // pow(2, 8) 2^8
  min = 0;

  if (msg == "unsigned long long" || msg == "unsigned long" || msg == "unsigned int")
    printf("%-18s; %d; %3d; %.0f bis %.2e\n", msg, byte, bit, min, max);
  else
    printf("%-18s; %d; %3d; %.0f bis %.0f\n", msg, byte, bit, min, max);
}
// Definition
void Datentyp_signed(char *msg)
{
  char a = 1;
  int b = 1;
  long c = 1;
  long long d = 1;

  unsigned int byte;
  unsigned int bit;
  double max;
  double min;

  if (msg == "char")
    byte = sizeof(a);
  else if (msg == "int")
    byte = sizeof(b);
  else if (msg == "long")
    byte = sizeof(c);
  else if (msg == "long long")
    byte = sizeof(d);
  else
    printf("Fehler! Datentyp angeben.");

  bit = byte * 8;
  // signed
  max = pow(2, bit - 1) - 1; // pow(2, 8) 2^8
  min = -(pow(2, bit - 1));

  if (msg == "long" || msg == "int")
    printf("%-18s; %d; %3d; %.0f bis %.0f\n", msg, byte, bit, min, max);
  else if (msg == "long long")
    printf("%-18s; %d; %3d; %.2e bis %.2e\n", msg, byte, bit, min, max);
  else
    printf("%-18s; %d; %3d; %.0f bis %.0f\n", msg, byte, bit, min, max);
}
