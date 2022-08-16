#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int strToInt(string str)
    {
        int n = str.length() - 1;
        int t = 1, ans = 0;
        bool flag = false;
        for (int i = n; i >= 0; i--)
        {
            if (str[i] == '-')
            {
                ans = -ans;
                break;
            }
            else if (str[i] >= '1' && str[i] <= '9')
            {
                flag = true;
                int tmp = (int)str[i];
                tmp -= 48;
                ans += tmp * t;
                t *= 10;
            }
            else if (flag == false)
                continue;
            else
                break;
        }
        return ans;
    }
};
int main()
{
    Solution ans;
    string st;
    cin >> st;
    cout << ans.strToInt(st) << endl;
    return 0;
}