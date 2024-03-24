#include <iostream>
#include <vector>

using namespace std;

int bsearch(const vector<int> &arr, int target)
{

    int left = 0;
    int right = arr.size() - 1;

    if (target > arr[right])
        return right + 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return left;
}

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << bsearch(a, t) << endl;
}