#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N = 10, i, nombre, neg, pos;
  int *T = (int *)malloc(N*sizeof(int));

  for (i = 0; i < N; i++)
  {
    printf("T<%d>=", i);
    scanf("%d", &nombre);
    *(T + i) = nombre;
    if (nombre >= 0)
    {
      pos++;
    } else {
      neg++;
    }
  }

  printf("nombre des positives est %d\n", pos);
  printf("nombre des negatives est %d\n", neg);
}