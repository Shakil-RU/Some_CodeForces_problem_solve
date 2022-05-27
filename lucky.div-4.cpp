#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s; cin>>s;
    long long int sumf=(s[0]-'0')+(s[1]-'0')+(s[2]-'0');
    long long int sum=(s[3]-'0')+(s[4]-'0')+(s[5]-'0');
    if(sumf==sum)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);



    long long int t; cin>>t;
    for(int k=0; k<t; k++)
    {
        solve();
    }
    return 0;
}
