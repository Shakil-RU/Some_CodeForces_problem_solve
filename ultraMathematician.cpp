#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int i,j;
    for(i=0,j=0; i<a.size(); i++,j++)
    {
        if(a[i]==b[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }

    return 0;
}
