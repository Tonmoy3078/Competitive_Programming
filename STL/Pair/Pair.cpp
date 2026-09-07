#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string>p;
    //p = make_pair(2,"abc");

    p = {2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string>tk = p ;///COPY pair p


    int a[] = {2,3,4};
    int b[] = {4,5,6};

    pair<int,int>p_array[3];
    p_array[0] = {2,3};
    p_array[1] = {3,5};
    p_array[2] = {4,6};

    for(int i=0; i<3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}
