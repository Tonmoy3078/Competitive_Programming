#include<iostream>
using namespace std;
//int sumofN(int x)//integer type returns integer type value
void sumofN(int x)///void type doesn't return any value
{
    int sum=0;
    for(int i=1; i<=x; i++)
    {
        sum = sum + i;
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cin>>n;

    //cout<<sumofN(n);
    sumofN(n);
}


