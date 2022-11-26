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

void Bubbol_Sort(int n, int *arr)
{
  int temp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    printf("Pass : %d\n", i);
    printArray(n, arr);
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
  Bubbol_Sort(n, arr);
  end = clock();

  printf("After Sorting Array : \t");
  printArray(n, arr);

  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

  printf("\n Running time =%lf", cpu_time_used);
}
