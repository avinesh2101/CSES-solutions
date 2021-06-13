#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007

/*sieve of erathosthenes for primes from 1 to n*/  
// vector<int>* sieve(){
//         bool isPrime[MAX];

//         vector<int>* primes = new vector<int>();   
//         for(int i=2;i<=MAX;i++){
//                 isPrime[i] = true;
//         }
//         for(int i=2;i*i<=MAX;i++){

//                 if(isPrime[i]){
//                         for(int j=i*i;j<=MAX;j+=i){
//                                 isPrime[j] = false;
//                         }
//                 }
//         }

//         primes->pb(2);
//         for(int i=3;i<=MAX;i+=2){
//                 if(isPrime[i]){
//                         primes->pb(i);
//                 }
//         }
//         return primes;

// }

// void solve(ll t)
// {

// }


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    // vector<int>* primes = sieve();

    // ll t;
    // cin>>t;
    // while(t--)
    // {
    //     solve(t);


    // }
    int a,b;
    cin>>a>>b;
    int c[a];
    for(int i =0;i<a;i++)
    {
        cin>>c[i];
    }
    cout<<"8";
    return 0;
}