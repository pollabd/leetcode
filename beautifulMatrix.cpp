#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T, x = 0;
  string x1 = "x++";
  string x2 = "++x";
  string x3 = "x--";
  string x4 = "--x";
  cin >> T;
  while (T--)
  {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s == x1 || s == x2)
    {
      x++;
    }
    else if (s == x3 || s == x4)
    {
      x--;
    }
  }

  cout << x << endl;
  return 0;
}
