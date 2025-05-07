#include <iostream>
using namespace std;

template <typename T, size_t n>
void deleteItem(T (&arr)[n], size_t k)
{
  if (k >= n)
  {
    cout << "Invalid Index!" << endl;
    return;
  }

  for (size_t i = k; i < n; i++)
  {
    arr[i] = arr[i + 1];
  }

  cout << "Item deleted at index " << k << "!" << endl;
}

int main()
{
  int arr[] = {12, 6, 0, 43, 4, 1, 4};

  // before deletion
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;

  // delete
  deleteItem(arr, 2);

  // after deletion
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << "\nIgnore last one!";
  return 0;
}
