// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> mergesort(vector<int> &nums)
    {
        int n = nums.size();

        // Perform Merge sort on the whole array
        mergeSortHelper(nums, 0, n - 1);
        return nums;
    }

private:
    void mergeSortHelper(vector<int> &nums, int low, int high) {
        // Base case: if the array has only one element
        if (low >= high) return;

        int mid = (low + high) / 2;

        // Recursively sort the left half
        mergeSortHelper(nums, low, mid);
        // Recursively sort the right half
        mergeSortHelper(nums, mid + 1, high);
        // Merge the sorted halves
        merge(nums, low, mid, high);
    }

private:
    void merge(vector<int> &nums, int low, int mid, int high) {
        // Temporary array to store merged elements
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high)
        {
        // Loop until subarrays are exhausted
            /* code */
            // Compare left and right elements
            if (nums[left] <= nums[right])
            {
                /* code */
                temp.push_back(nums[left]);
                left++;
            }
            else
            {
                /* code */
                temp.push_back(nums[right]);
                right++;
            }
        }

        // Adding the remaining elements of left half
        while (left <= mid)
        {
            /* code */
            temp.push_back(nums[left]);
            left++;
        }

        // Adding the remaining elements of right half
        while (right <= high)
        {
            /* code */
            temp.push_back(nums[right]);
            right++;
        }

        // Transferring the sorted elements to arr
        for (int i = low; i <= high; i++)
        {
            nums[i] = temp[i - low];
        }
    }

};

int main()
{
    // Create an instance of solution class
    Solution solution;

    vector<int> nums = {13, 46, 24, 52, 20, 9};

    cout << "Before Using Merge Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.mergesort(nums);

    cout << "After Using Merge Sort: " << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
