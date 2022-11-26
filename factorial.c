#include <stdio.h>
#include <time.h>

int iterativeFact(int n)
{
  int fact = 1;

  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int recursiveFact(int n)
{
  if (n == 1 || n == 0)
    return 1;
  else
    return n * recursiveFact(n - 1);
}

int main()
{
  int num;
  clock_t start, end;
  double clock_time;

  printf("Enter a number for the factorial : \n");
  scanf("%d", &num);

  start = clock();
  int iterFact = iterativeFact(num);
  end = clock();

  clock_time = ((double)(end - start)) / CLOCKS_PER_SEC;

  printf("\nIterative Method \n Factorial of %d is %d\n", num, iterFact);
  printf("Time Comlplecity : %lf\n", clock_time);

  start = clock();
  int recursiveFacttorial = recursiveFact(num);
  end = clock();

  clock_time = ((double)(end - start)) / CLOCKS_PER_SEC;

  printf("\nRecursive Method \nFactorial of %d is %d\n", num, recursiveFacttorial);
  printf("Time Comlplecity : %lf\n", clock_time);

  return 0;
}

// output
// Enter a number for the factorial :
// 5

// Iterative Method
//  Factorial of 5 is 120
// Time Comlplecity : 0.000005

// Recursive Method
// Factorial of 5 is 120
// Time Comlplecity : 0.000002
