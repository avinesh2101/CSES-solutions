#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using ll = long long;
// #define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    int c[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }

    // int dp[x+5];
    int*dp = new int[x+5];
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;

    
    for(int i=1;i<=x;i++)
    {
        int ans = INT_MAX;

        for(int j = 0;j<n;j++)
        {
            int so_far = INT_MAX;
            if( (i-c[j])>=0  )
            {
                if( dp[i-c[j]] !=-1  )
                {
                    so_far = dp[i-c[j]] + 1 ;
                }
               
            }
            ans = min(ans,so_far);
        }
        if(ans != INT_MAX)
        {
            dp[i] = ans;
        }  
    }

    cout<<dp[x]<<endl;
    return 0;
}


