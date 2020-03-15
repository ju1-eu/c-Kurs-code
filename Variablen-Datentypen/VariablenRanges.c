/*
  ju 6-Mrz-20 VariablenRanges.c
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
  float a = 1.0;
  double b = 1.0;

  unsigned int c = 1;
  int d = 1;
  char e = 1;
  unsigned char f = 1;
  short g = 1;

  // int, long
  int h = 1;
  long i = 1;
  long long j = 1;

  printf("Var a: %d\n", sizeof(a));
  printf("Var b: %d\n", sizeof(b));
  printf("Var c: %d\n", sizeof(c));
  printf("Var d: %d\n", sizeof(d));
  printf("Var e: %d\n", sizeof(e));
  printf("Var f: %d\n", sizeof(f));
  printf("Var g: %d\n", sizeof(g));

  printf("Var h: %d\n", sizeof(h));
  printf("Var i: %d\n", sizeof(i));
  printf("Var j: %d\n", sizeof(j));

  printf("Ranges fuer Int: %d, %d\n", INT_MIN, INT_MAX);
  printf("Ranges fuer Float: %E, %E\n", FLT_MIN, FLT_MAX);

  return 0;
}