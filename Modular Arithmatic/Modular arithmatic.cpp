#include<iostream>
using namespace std;
#define ll long long
#define MOD2 1e9+7

ll mod_inv(ll a, ll mod = MOD2)
{
  return binpow(a, mod - 2, mod);
}

ll mod_add(ll a, ll b, ll mod = MOD2)
{
  return (a + b) % mod;
}

ll mod_sub(ll a, ll b, ll mod = MOD2)
{
  return (a - b + mod) % mod;
}

ll mod_mul(ll a, ll b, ll mod = MOD2)
{
  return (a % mod) * (b % mod) % mod;
}

int main()
{
    int a,b;
    cin>>a>>b;
}
