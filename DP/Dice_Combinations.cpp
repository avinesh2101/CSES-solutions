#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>dp(n+1,0);

    dp[0] = 1;//to get sum as 0 we need to do nothing
    for(int i=0;i<n+1;i++)
    {
        for(int x = 1;x<=6;x++)
        {
            if(x>i)
            {
                break;
            }
            dp[i] =(dp[i]+dp[i-x])%mod;
        }
    }
    cout<<dp[n]<<endl;
}