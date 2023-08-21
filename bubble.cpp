#include <iostream>
#include <vector>
using namespace std;

// Bubble sort

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        for (int j = 0; j < nums.size() - 1; j++)
        {
            bool swapped = false;
            for (int i = 0; i < nums.size() - 1 - j; i++)
            {
                if (nums[i + 1] < nums[i])
                {
                    swap(nums[i], nums[i + 1]);
                    swapped = true;
                }
            }
            if (swapped == false)
            {
                break;
            }
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