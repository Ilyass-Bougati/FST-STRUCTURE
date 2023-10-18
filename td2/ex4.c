#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, *T, *Tpos, *Tneg, npos, nneg, nombre, i, v, ipos, ineg;

  T = (int *) malloc(N * sizeof(int));

  printf("donner le nombre des valeurs ");
  scanf("%d", &N);

  do {
    printf("T<%d>=", i);
    scanf("%d", &nombre);
    *(T + i) = nombre;
    if (nombre >= 0)
    {
      npos++;
    } else {
      nneg++;
    }
    i++;
  } while (i < N);

  Tneg = (int *) malloc(nneg * sizeof(int));
  Tpos = (int *) malloc(npos * sizeof(int));

  for (i = 0; i < N; i++)
  {
    v = *(T + i);
    if (v >= 0)
    {
      *(Tpos + ipos) = v;
      ipos++;
    } else {
      printf("%d neg", v);
      *(Tneg + ineg) = v;
      ineg++;
    }
  }

  // printing the values of Tpos and Tneg
  printf("\nLe tables des nombres + \n");
  for (i = 0; i < npos; i++)
  {
    printf("Tpos<%d>=%d\n", i, *(Tpos + i));
  }

  printf("\nLe tables des nombres - \n");
  for (i = 0; i < nneg; i++)
  {
    printf("Tneg<%d>=%d\n", i, *(Tneg + i));
  }
}