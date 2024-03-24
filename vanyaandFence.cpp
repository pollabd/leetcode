#include <iostream>
#include <vector>

using namespace std;

int vannyAndFench(int n, const vector<int> &a, int m)
{

    int res = 0;

    for (int i = 0; i < n; ++i)
    {

        if (a[i] > m)
        {
            res += 2;
        }
        else
        {
            res++;
        }
    }

    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i=0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << vannyAndFench(n, a, m) << endl;
    return 0;
}
