#include <bits/stdc++.h>
using namespace std;
int a[1002][1002],dp[1002][1002];
int dep;
const int MAX= 1000002;
int main(){
    cin>>dep;
    for(int i=1;i<=dep;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=dep+1;i++){
        for(int j=0;j<=dep+1;j++){
            dp[i][j]=INT_MAX;
        }
    }
    dp[1][1]=a[1][1];
    for (int i=2;i<=dep;i++){
        for (int j=1;j<=i;j++){
            dp[i][j]=min(dp[i-1][j-1],dp[i-1][j])+a[i][j];
        }
    }
    int ans=INT_MAX;
    for (int i=1;i<=dep;i++){
        ans=min(ans,dp[dep][i]);
    }
    cout<<ans<<endl;
    return 0;
}