#include <stdio.h>

/**
 * Reads n space-separated doubles from standard input into the given
 * array.
 *
 * @param n a non-negative integer
 * @param a an array with at least n elements
 */
void read_array(size_t n, double a[]);

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

  read_array(SIZE, arr);
  
  double total = total_array(SIZE, arr);

  printf("Average: %lf\n", total / SIZE);

  return 0;
}

void read_array(size_t n, double a[])
{
  for (size_t i = 0; i < n; i++)
    {
      fscanf(stdin, "%lf", &a[i]);
    }
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
