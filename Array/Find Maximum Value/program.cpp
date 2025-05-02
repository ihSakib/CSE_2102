#include <iostream>
using namespace std;

template <typename T, size_t N>
T findMax(T (&arr)[N])
{
  T max = arr[0];
  for (size_t i = 1; i < N; ++i)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

int main()
{
  float arr[] = {1.8, 1.9, 0, 24.542, 2, 1, 1};

  cout << "Max value: " << findMax(arr) << endl;

  return 0;
}
