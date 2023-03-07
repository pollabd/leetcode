#include <iostream>
using namespace std;

int main()
{
  int MAX, b;
  int counter = 0;
  cin >> MAX >> b;
  int arr[MAX];
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < MAX; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < MAX; i++)
  {
    if (arr[i] >= arr[b - 1] && arr[i] > 0)
    {
      counter++;
    }
  }
  cout << counter << endl;
  return 0;
}
