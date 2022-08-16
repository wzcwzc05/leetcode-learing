#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int t = nums.size() - 1;
        int left = 0, right = t, mid = (left + right) / 2;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (target < nums[mid])
            {
                right = mid - 1;
            }
            else if (target > nums[mid])
            {
                left = mid + 1;
            }
            else if (target == nums[mid])
            {
                return mid;
            }
        }
        return -1;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    Solution Sol;
    cout << Sol.search(nums, m) << endl;
    return 0;
}