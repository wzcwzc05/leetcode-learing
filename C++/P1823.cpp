#include <bits/stdc++.h>
using namespace std;
int n,k;
int FindAns(int n,int k){
    if (n==1)
    return 1;
    else return (FindAns(n-1,k)+k)%n - 1;
}
int main(){
    cin>>n>>k;
    cout<<FindAns(n,k)<<endl;
    return 0;
}