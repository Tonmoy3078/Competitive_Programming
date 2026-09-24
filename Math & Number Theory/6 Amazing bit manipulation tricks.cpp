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
    //optimize();


    /*for(int i=0; i<8; i++)
    {
        printBinary(i);
        if(i&1!=0)
        {
            cout<<"Odd\n";
        }
        else
        {
            cout<<"even\n";
        }
    }*/

    int n = 5;



    ///Trick - 01
    ///Modulo Trick
    if(n&1)cout<<"odd"<<endl;
    else cout<<"even"<<endl;


    ///Modulo and Multiplicative tricks
    ///n = 101;
    cout<<(n>>1)<<endl;/// Divide by 2;,here 101 -> 10;
    cout<<(n<<1)<<endl;/// Multiply by 2;,here 101 ->1010;


    ///Trick - 02
    ///upper_case to lower_case
    for(char c = 'A'; c<='E'; c++)///5th not set
    {
        //cout<<c<<endl;
        //printBinary(int(c));
    }
    for(char c = 'a'; c<='e'; c++)///5th bit set
    {
        //cout<<c<<endl;
        //printBinary(int(c));
    }

    char A = 'A';
    char a =   A|(1<<5);
    cout<<a<<endl;

    char d = 'd';
    char D = d&(1<<5);
    cout<<D<<endl;

}
