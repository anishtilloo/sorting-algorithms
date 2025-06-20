// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < nums.size() - 1 - i; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swapElement(j, j + 1, nums);
                }
            }
        }
        return nums;
    }

public:
    vector<int> improvedBubbleSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            bool isSwapped = false;
            
            for (int j = 0; j < nums.size() - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swapElement(j, j + 1, nums);
                    isSwapped = true;
                }
            }

            if(!isSwapped) break;
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

    cout << "Before Using Bubble Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // Function call for bubble sort
    nums = solution.bubbleSort(nums);

    cout << "After Using Bubble Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // Function call for bubble sort
    nums = solution.improvedBubbleSort(nums);
    cout << "After Using Improved Bubble Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

