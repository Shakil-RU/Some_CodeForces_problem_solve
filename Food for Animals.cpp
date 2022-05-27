#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a+c>=x && b+c>=y && a+b+c>=x+y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
