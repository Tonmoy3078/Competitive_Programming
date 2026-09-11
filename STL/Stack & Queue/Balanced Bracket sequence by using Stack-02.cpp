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

     int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        stack<char>c;
        bool ok = true;


        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                c.push(s[i]);
            }

            else
            {

                if(c.empty())
                {
                    ok = false;
                    break;
                }
                if((s[i]==')' && c.top()=='(') || (s[i]=='}' && c.top()=='{') || (s[i]==']' && c.top()=='['))
                {
                    c.pop();
                }

                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok && c.size()==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}

