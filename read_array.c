#include <stdio.h>

/**
 * Returns the total of the values in the given array.
 *
 * @param n a non-negative integer
 * @param a an array with at least n elements
 * @return the total of the first n elements of a
 */
double total_array(size_t n, double a[]);

int main()
{
  const size_t SIZE = 6;
  double arr[SIZE];

  for (size_t i = 0; i < SIZE; i++)
    {
      fscanf(stdin, "%lf", &arr[i]);
    }
  
  double total = total_array(SIZE, arr);

  printf("Average: %lf\n", total / SIZE);

}

double total_array(size_t n, double a[])
{
  double total = 0.0;
  for (size_t i = 0; i < n; i++)
    {
      total += a[i];
    }
  return total;
}
