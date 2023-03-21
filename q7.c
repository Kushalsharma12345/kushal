#include <stdio.h>

int main() {
  float a;

  printf("Enter a length in centimeters: ");
  scanf("%f", &a);

 

  printf("Length in meters: %f m\n", a/100);
  printf("Length in kilometers: %f km\n", a/100000);

  return 0;
}
