#include <stdio.h>
#include <stdlib.h>

int main()
{

  int number, *digits, i = 0;

  printf("Entrer le nombre decimal ");
  scanf("%d", &number);

  while(number != 0)
  {
    // allocating the memory
    digits = (int *)realloc(digits, (i + 1)*sizeof(int));
    *(digits + i) = number % 2;
    number /= 2;
    i++;
  }

  // printing the decimal number
  for (i -= 1; i >= 0; i--)
  {
    printf("%d", *(digits + i));
  }
  printf("\n");

  return 0;
}


