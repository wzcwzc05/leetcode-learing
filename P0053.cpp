#include <bits/stdc++.h>
using namespace std;
int n,a[100000],dp[100000];
int main(){
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    dp[n+1]=INT_MIN;
    for (int i=n;i>=1;i--){
        dp[i]=max(a[i],dp[i+1]+a[i]);
    }
    int ans=INT_MIN;
    for (int i=1;i<=n;i++){
        ans = max(dp[i],ans);
    }
    cout<<ans<<endl;
    return 0;
}