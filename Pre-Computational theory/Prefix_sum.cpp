#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int pf[N];
int a[N];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++)
    {
        pf[i] = pf[i-1] + a[i];
    }

    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int l,r;
        cin>>l>>r;

        cout<<pf[r] - pf[l-1]<<endl;
    }



}
