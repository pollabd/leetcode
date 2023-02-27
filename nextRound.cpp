#include <iostream>
#include <array>
using namespace std;

int main()
{

  int MAX, b;
  cin >> MAX >> b;
  int score[MAX];
  int arrSize = sizeof(score) / sizeof(score[0]);

  for (int i = 0; i < MAX; i++)
  {
    cin >> score[i];
  }
  for (int i = 0; i < MAX; i++)
  {
    cout << score[i] << endl;
  }

  return 0;
}