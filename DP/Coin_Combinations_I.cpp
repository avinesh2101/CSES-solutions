#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll a,b;//n,x
    cin>>a>>b;
    ll c[a];
    // int*c = new int[a+5];
    for(int i =0;i<a;i++)
    {
        cin>>c[i];
    }

    // int*dp = new int[b+5];
    ll dp[b+5];
    // dp[b] = 8;
    memset(dp,-1,sizeof(dp));
    
    dp[0] = 1;
  
    for(int i = 1;i<=b;i++)
    {
        ll ans=0;
        for(int j=0;j<a;j++)
        {
            if( i-c[j] >= 0)
            {
                if(dp[i-c[j]] > -1)
                {
                    ans =( (ans % mod) + (dp[i-c[j]] % mod))%mod;
                }
            }
        }
        dp[i] = ans % mod;
        ans = 0;
    }

    cout<<dp[b]<<endl;
    // for(int i=0;i<b;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    return 0;
}