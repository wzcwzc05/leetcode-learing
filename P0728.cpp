#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool judge(int x)
    {
        int t = x;
        bool flag=false;
        while (x > 0)
        {
            flag = true;
            int tmp = x % 10;
            x = x / 10;
            if ((tmp == 0) || (t % tmp != 0))
                return false;
        }
        if (flag==true)
        return true;
        else return false;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            if (judge(i))
                ans.push_back(i);
        }
        return ans;
    }
};
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> ans;
    Solution Sol;
    ans = Sol.selfDividingNumbers(a, b);
    for (int i = 0; i <= ans.size() - 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}