#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 void printBinary(int num)
{
    for(int i=10; i>=0; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    optimize();

    int n;
    cin>>n;

    //vector<int>days(n);
    vector<int>masks(n,0);
    for(int i=0; i<n; i++)
    {
        int num_workers;
        cin>>num_workers;
        int mask=0;

        for(int j=0; j<num_workers; j++)
        {
            int day;
            cin>>day;
            //days[i].pb(day);
            mask = (mask | (1<<day));
        }
        masks[i] = mask;
    }


    /*
    for(int i=0; i<n; i++)
    {
        cout<<masks[i]<<endl;
        printBinary(masks[i]);
    }
    */

    int ans=INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ///days[i],days[j],intersection;
            int intersection = (masks[i]&masks[j]);
            int Setbit = __builtin_popcount(intersection);
            ans = max(ans,Setbit);
        }
    }
    cout<<ans<<endl;


}
