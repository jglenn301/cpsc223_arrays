#include <stdio.h>

int main()
{
  const size_t SIZE = 6;
  double arr[SIZE];

  for (size_t i = 0; i < SIZE; i++)
    {
      fscanf(stdin, "%lf", &arr[i]);
    }
  
  double total = 0.0;
  for (size_t i = 0; i < SIZE; i++)
    {
      total += arr[i];
    }
  printf("Average: %lf\n", total / SIZE);

  return 0;
}
