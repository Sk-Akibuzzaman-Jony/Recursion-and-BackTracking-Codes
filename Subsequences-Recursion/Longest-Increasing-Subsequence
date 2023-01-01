#include <iostream>
#include <string>
#include <vector>
using namespace std;

int increasingSubs(vector<int> &nums, int i, int prev)
{
    if (i == nums.size())
    {
        return 0;
    }
    int include = 0;
    if (nums[i] > nums[prev] || prev == -1)
    {
        
        include = 1 + increasingSubs(nums, i + 1, i);
    }

    int exclude = increasingSubs(nums, i + 1, prev);

    return max(include, exclude);
}

int lengthOfLIS(vector<int> &nums)
{

    return increasingSubs(nums, 0, -1);
}

int main()
{
    vector<int> nums{10, 9, 2, 5, 3, 7, 101, 18};
    cout << lengthOfLIS(nums);
}
