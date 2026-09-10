
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes "YES\n"
#define no "NO\n"
#define pb push_back
#define elif else if
#define ll long long
#define ld long double
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define rvs(v) reverse(v.begin(),v.end())
#define F first
#define S second
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define fr(i,a,b) for(ll i=a;i<=b;i++)

int main()
{
    optimize();

    int n;
    cin>>n;
    vector<pair<string,int>>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),[](auto a,auto b)
    {
        if(a.second != b.second)
        {
            return a.second>b.second;
        }
        return a.first<b.first;

    });

    for(auto u : v)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }


}

