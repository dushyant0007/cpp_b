#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &nums, int k, int mid)
{
    int count = 1;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (sum + nums[i] <= mid)
        {
            sum += nums[i];
        }
        else
        {
            count++;
            if (count > k || nums[i] > mid)
            {
                return false;
            }
            sum = 0;
            sum += nums[i];
        }
    }
    return true;
}

int splitArray(vector<int> &nums, int k)
{
    int srt = 0;
    int end = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        end += nums[i];
    }

    while (srt <= end)
    {
        int mid = srt + (end - srt) / 2;
        if (isPossible(nums, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            srt = mid + 1;
        }
    }
    return ans;
}
