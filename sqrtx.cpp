#include <iostream>
#include <cmath>

using namespace std;

int mySqrt(int x)
{

    int left = 1, right = x, mid = -1;

    if (x == 0 || x == 1)
    {
        return x;
    }

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        long long square = static_cast<long long>(mid) * mid;

        if (square > x)
        {
            right = mid - 1;
        }
        else if (mid == x)
        {
            return mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return static_cast<int>(round(right));
}

int main()
{
    int result = mySqrt(15);
    cout << result << endl; // Output: 3
}
