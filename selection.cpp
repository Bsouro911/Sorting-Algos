#include <iostream>
#include <vector>
using namespace std;

// Selection sort

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        for (int i = 0; i < nums.size() - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(nums[minIndex], nums[i]);
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