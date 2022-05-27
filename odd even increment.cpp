#include<bits/stdc++.h>
using namespace std;

void solve(){
        int n;cin>>n;
        vector<int>odd;
        vector<int>even;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if((i+1)%2==0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }

        }


        int odd1=0,odd2=0,even1=0,even2=0;
        for(int i=0;i<even.size();i++){
            if(even[i]%2==0){
                even1++;
            }
            else{
                odd1++;
            }

        }

           for(int i=0;i<odd.size();i++){
            if(odd[i]%2==0){
                even2++;
            }
            else{
                odd2++;
            }

        }


        if(even1==even.size() && (odd2==odd.size() || even2==odd.size())){
            cout<<"YES"<<endl;
        }
        else if(odd1==even.size() &&(odd2==odd.size() || even2==odd.size())  ){
            cout<<"YES"<<endl;
        }
        else{
                cout<<"NO"<<endl;
        }



}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       solve();


    }


  return 0;
}
