#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != val)
        {
            nums[idx] == nums[i];
            idx++;
        }
    }

    return idx;
}
int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int remaining = removeElement(nums, val);
    cout << "Remaining elements: " << remaining << endl;

    return 0;
}