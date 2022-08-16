#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        stringstream ss;
        ss << x;
        string st = ss.str();
        string st2 = st;
        reverse(st.begin(), st.end());
        if (st == st2)
        return true;
        else return false;
    }
};
int main(){
    int x;
    cin>>x;
    Solution Sol;
    cout<<Sol.isPalindrome(x)<<endl;
    return 0;
}