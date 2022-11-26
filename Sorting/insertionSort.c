#include <stdio.h>
#include <time.h>

void printArray(int n, int *a)
{
  printf("Your Array is : \t");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void Insertion_Sort(int n, int *a)
{
  int j, temp, val;

  for (int i = 0; i < n - 1; i++)
  {
    j = i + 1;
    val = a[j];
    while (j > 0 && val < a[j - 1])
    {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = val;
  }
}

int main()
{
  clock_t start, end;

  double cpu_time_used;
  int key, n, arr[n];

  printf("Total number of elements : \n");
  scanf("%d", &n);

  printf("Enter The elements : \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Before Sorting Array : \t");
  printArray(n, arr);

  start = clock();
  Insertion_Sort(n, arr);
  end = clock();

  printf("After Sorting Array : \n");
  printArray(n, arr);

  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

  printf("\n Running time =%lf", cpu_time_used);
}
