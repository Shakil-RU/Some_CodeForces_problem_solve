#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        if(a.size()==2)
            cout<<a[1]<<endl;
        else{

                vector<int>v;
        for(int i=0;i<a.size();i++){
            v.push_back(a[i]-'0');
        }

        sort(v.begin(),v.end());
        cout<<v[0]<<endl;

        }

    }


    return 0;
}
