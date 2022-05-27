#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1; i<=w; i++)
    {
        sum=sum+i;
    }

    int t=(sum*k)-n;
    if(t<0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<t<<endl;
    }

    return 0;
}
