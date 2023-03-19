#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  string s;
  getline(cin, s); // read the input string

  // extract the individual numbers from the input string
  stringstream ss(s);
  string number;
  vector<int> numbers;
  while (getline(ss, number, '+'))
  {
    numbers.push_back(stoi(number));
  }

  // sort the numbers in non-decreasing order
  sort(numbers.begin(), numbers.end());

  // concatenate the sorted numbers into a new string
  stringstream new_ss;
  for (int i = 0; i < numbers.size(); i++)
  {
    new_ss << numbers[i];
    if (i != numbers.size() - 1)
    {
      new_ss << "+";
    }
  }
  string new_s = new_ss.str();

  // print the new string
  cout << new_s << endl;

  return 0;
}
