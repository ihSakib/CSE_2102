#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target)
{
  int l = 0, r = n - 1;

  while (l <= r)
  {
    int mid = l + (r - l) / 2;

    if (arr[mid] > target)
    {
      r = mid - 1;
    }
    else if (arr[mid] < target)
    {
      l = mid + 1;
    }
    else
    {
      return mid;
    }
  }

  return -1;
}

int main()
{
  int arr[]{0, 2, 4, 6, 9};
  int target = 8;

  int i = binary_search(arr, sizeof(arr) / sizeof(int), target);

  if (i != -1)
  {
    cout << arr[i] << " Found at: " << i << endl;
  }
  else
  {
    cout << "Not found" << endl;
  }

  return 0;
}