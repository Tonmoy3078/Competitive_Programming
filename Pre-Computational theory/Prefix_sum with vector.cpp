#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    vector<int>pre_sum(n+1,0);
    for (int i=1; i<=n; i++)
    {
        pre_sum[i] = pre_sum[i-1] + v[i-1];
    }


    for (int i=0; i<=n; i++)
    {
        cout<<pre_sum[i]<<" ";
    }
    cout<<endl;


    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        in>>l>>r;

        int sum = pre_sum[r] - pre_sum[l-1];
        cout<<sum<<endl;
    }


}
