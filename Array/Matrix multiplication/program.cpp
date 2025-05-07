#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randVal()
{
  return rand() % 100 - 10;
}

int main()

{
  srand(time(0));

  int r1, c1, r2, c2;

  cout << "Enter the number of row and column for matrix A ";
  cin >> r1 >> c1;

  cout << "Enter the number of row and column for matrix B ";
  cin >> r2 >> c2;

  if (c1 != r2)
  {
    cout << "\033[31mColumn of matrix A must be same as Row of matrix B\nTry again!\033[0m" << endl;
    return 0;
  }

  int A[r1][c1];
  int B[r2][c2];

  int result[r1][c2];

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      A[i][j] = randVal();
    }
  }

  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      B[i][j] = randVal();
    }
  }

  cout << endl
       << "\033[32mMatrix A\033[0m" << endl;
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      cout << A[i][j] << "\t";
    }
    cout << endl;
  }

  cout << endl;

  cout << "\033[32mMatrix B\033[0m" << endl;
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cout << B[i][j] << "\t";
    }
    cout << endl;
  }

  cout << endl
       << "\033[32mMatrix AxB\033[0m" << endl;

  for (size_t i = 0; i < r1; i++)
  {
    for (size_t j = 0; j < c2; j++)
    {
      int sum = 0;
      for (size_t k = 0; k < c1; k++)
      {
        sum += A[i][k] * B[k][j];
      }
      result[i][j] = sum;
    }
  }

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cout << result[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}