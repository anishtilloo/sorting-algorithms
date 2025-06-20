// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int eleInd = -1;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    if (eleInd != -1 && nums[j] > nums[eleInd])
                    {
                        continue;
                    }
                    else
                    {
                        eleInd = j;
                    }
                }
            }
            if (eleInd > -1)
            {
                swapElement(i, eleInd, nums);
                eleInd = -1;
            }
        }
        return nums;
    }

    vector<int> selectionSort1(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int minEle = i;
            /* code */
            for (int j = i + 1; j < nums.size(); j++)
            {
                /* code */
                if(nums[j < nums[minEle]]) {
                    minEle = j;
                }

            }

            if(minEle != i) {
                swap(nums[minEle], nums[i]);
            } 
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

    cout << "Before Using Selection Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.selectionSort1(nums);

    cout << "After Using Selection Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
