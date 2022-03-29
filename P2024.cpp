#include <bits/stdc++.h>
using namespace std;
//滑动窗口
class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int n = answerKey.length();
        int left = 0, right = 0;
        int ans = 0;
        int tt, tf;
        tt = 0;
        tf = 0;
        if (answerKey[0] == 'F')
            tf = 1;
        else
            tt = 1;
        while (left <= n - 1)
        {
            if ((tt + k >= right - left + 1) || (tf + k >= right - left + 1))
            {
                ans = max(ans, right - left + 1);
                if (right <= n - 2)
                {
                    right++;
                    if (answerKey[right] == 'F')
                        tf++;
                    else
                        tt++;
                }
                else
                {
                    left++;
                    if (answerKey[left - 1] == 'F')
                        tf--;
                    else
                        tt--;
                }
            }
            else
            {
                left++;
                if (answerKey[left - 1] == 'F')
                    tf--;
                else
                    tt--;
            }
        }
        return ans;
    }
};
int main()
{
    string st;
    int t;
    cin >> st >> t;
    Solution ans;
    cout << ans.maxConsecutiveAnswers(st, t) << endl;
    return 0;
}