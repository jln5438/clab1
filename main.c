#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
// Author: Jacob Noeethiger jln5438@psu.edu
int main(void) {
  char *temp_str = readline("Enter temperature in celsius: ");
  double temp = atof(temp_str);
  double ftemp = (temp*9/5)+32;
  printf("%f in Celsius is equivalent to %f Fahrenheit\n",temp,ftemp);
  return 0;
}