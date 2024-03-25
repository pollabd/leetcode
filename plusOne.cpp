#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] != 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);

    return digits;
}

int main()
{

    vector<int> nums = {1, 3, 6};
    vector<int> result = plusOne(nums);
    for (int digit : result)
    {
        std::cout << digit << " ";
    }
}