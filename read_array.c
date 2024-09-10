#include <stdio.h>

int main()
{
  double arr[6];

  for (size_t i = 0; i < 6; i++)
    {
      fscanf(stdin, "%lf", &arr[i]);
    }
  
  double total = 0.0;
  for (size_t i = 0; i < 6; i++)
    {
      total += arr[i];
    }
  printf("Average: %lf\n", total / 6);

  return 0;
}
