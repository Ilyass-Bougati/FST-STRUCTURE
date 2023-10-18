#include <stdio.h>

int main()
{
  float sum, note, moy;
  int i, N = 5;

  do {
    printf("Entrer la note %d ", i + 1);
    scanf("%f", &note);

    if (note >= 0 && note <= 20)
    {
      sum += note;
      i++;
    } else {
      printf("Saisie incorrect !!!, ");
    }

  } while (i < N);

  moy = sum / N;

  printf("Le moyenne est : %.2f\n", moy);

  return 0;
}