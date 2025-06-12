// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> insertionSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i;
            while (j > 0 && nums[j - 1] > nums[j])
            {
                swapElement(j, j - 1, nums);
                j--;
            }
        }
        return nums;
    }

    vector<int> insertionSort1(vector<int> &nums) 
    {
        for (int i = 1; i < nums.size(); i++)
        {
            /* code */
            int currEle = nums[i];
            int prevInd = i - 1;
            while (nums[prevInd] > currEle && prevInd >= 0)
            {
                /* code */
                nums[prevInd + 1] = nums[prevInd];
                prevInd--;

            }
            nums[prevInd + 1] = currEle;
        }
        return nums;
    }

private:
    void swapElement(int iInd, int jInd, vector<int> &nums)
    {
        int temp = nums[jInd];
        nums[jInd] = nums[iInd];
        nums[iInd] = temp;
    }
};

int main()
{
    // Create an instance of solution class
    Solution solution;

    vector<int> nums = {13, 46, 24, 52, 20, 9};

    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.insertionSort1(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
