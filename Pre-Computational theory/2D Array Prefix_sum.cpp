#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1010;

ll arr[N][N], pre[N][N];

int main()
{


    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cin>>arr[i][j];
        }
    }

    // Build 2D prefix sum
    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }

    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        ll sum = pre[c][d] - pre[a-1][d] - pre[c][b-1] + pre[a-1][b-1];
        cout<<sum<<endl;
    }
}
