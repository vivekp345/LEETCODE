#include <iostream>
#include <bits/stdc++.h>
#include <vector>

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> r(nums.size());
        int j = 0;
        int k = 1;
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            if (nums[i] > 0)
            {
                r[j] = nums[i];
                j = j + 2;
            }
            else
            {
                r[k] = nums[i];
                k = k + 2;
            }
        }
        return r;
    }
};