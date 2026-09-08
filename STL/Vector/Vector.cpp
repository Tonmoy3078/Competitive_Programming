#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    /*vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }*/
    vector<int>v(10,3);
    v.push_back(69);
    v.push_back(5);/// Add 5 in the end of the array;TC:O(n)
    v.pop_back();///Delete the last element of the array;TC:O(n)

   printVec(v);
}
