#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canReorderDoubled(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        unordered_map<int, int> umap;
        for (int i = 0; i <= arr.size() - 1; i++)
        {
            umap[arr[i]]++;
        }
        if (umap[0]%2==1){
            return false;
        }
        for (int i = 0; i <= arr.size() - 1; i++)
        {
            if (umap[arr[i]*2]>=umap[arr[i]]){
                
            }
            else{
                return false;
            }
        }
    }
};
int main()
{
    return 0;
}