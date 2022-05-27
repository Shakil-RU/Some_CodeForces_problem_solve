#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
       int sum=0,sum1=0;
        string s;
        cin>>s;

    for(int j=0;j<s.size()/2; j++)
    {
        sum=sum+j;
    }
     for(int k=s.size()/2; k<s.size(); k++)
    {
        sum1=sum1+k;
    }

     if(sum==sum1)
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
