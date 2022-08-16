#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000];
string st;
void dfs(int dep, int left, int right,string st)
{
//    cout<<dep<<" "<<left<<" "<<right<<" "<<st<<endl;
    if (dep <= 2 * n)
    {
        if (left<right)
        return;
        st.push_back('(');
        dfs(dep + 1, left + 1, right,st);
        st.pop_back();
        st.push_back(')');
        dfs(dep + 1, left, right + 1,st);
        st.pop_back();
    }
    else if (left==n && right==n)
    {
        cout << st << endl;
        return;
    }
}
int main()
{
    cin >> n;
    dfs(1,0,0,st);
    return 0;
}