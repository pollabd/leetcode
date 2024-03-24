#include <iostream>
#include <cmath>

using namespace std;

int mySqrt(int x)
{

    int left = 0, right = x;
    int mid = left + (right - left) / 2;

    if (x == 0 || x == 1)
    {
        return x;
    }

    while (left <= right)
    {
    }
}

int main()
{
    int result = mySqrt(15);
}
