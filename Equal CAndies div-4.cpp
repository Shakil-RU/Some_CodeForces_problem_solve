#include<bits/stdc++.h>
using namespace std;


void solve()
{
   long long int n;
   cin>>n;
   vector<long long int>v(n);
   for(int i=0; i<n; i++)
   {
       cin>>v[i];
   }
   long long int m=*min_element(v.begin(),v.end());
   long long int ans=0;
   for(int j=0; j<n; j++)
   {
       ans=ans+(v[j]-m);
   }
   cout<<ans<<endl;
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
