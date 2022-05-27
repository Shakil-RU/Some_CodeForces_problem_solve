#include<bits/stdc++.h>
using namespace std;
int main()
{
int t; cin>>t;
for(int i=0; i<t; i++)
{
    int n; cin>>n;
    int arr[n];
    for(int j=0; j<n; j++)
    {
       cin>>arr[j];
    }
    sort(arr,arr+n);
int cnt=0;
    for(int j=0;j<n-1;j++){
        if(abs(arr[j]-arr[j+1])>=2){
                cout<<"NO"<<endl;

                cnt=1;
                 break;


        }
    }

   if(cnt==0) cout<<"YES"<<endl;

}


    return 0;
}
