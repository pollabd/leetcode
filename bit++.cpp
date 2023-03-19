#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> arr[i][j];
    }
  }

  int x, y;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (arr[i][j] == 1)
      {
        x = i;
        y = j;
      }
    }
  }

  int moves = abs(x - 2) + abs(y - 2);
  cout << moves << endl;

  return 0;
}
