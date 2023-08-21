#include <iostream>
#include <vector>
using namespace std;

// insertion sort

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            int temp = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > temp)
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = temp;
        }
    }
};

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution sol;
    sol.sortColors(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}