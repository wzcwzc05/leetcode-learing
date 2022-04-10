#include <bits/stdc++.h>
using namespace std;
int a[100002],dp[1000002];
int dep,n;
const int MAX= 1000002;
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    memset(dp,0,sizeof(dp));
    for (int i=1;i<=n;i++){
        dp[i]=1;
        for (int j=1;j<i;j++){
            if (a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int ans=0;
    for (int i=1;i<=n;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}