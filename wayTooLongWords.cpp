#include <iostream>
using namespace std;

int main()
{
  int t;
  string n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    if (n.size() > 10)
    {
      cout << n[0] << n.size() - 2 << n[n.size() - 1] << endl;
    }
    else
    {
      cout << n << endl;
    }
  }

  return 0;
}