#include<bits/stdc++.h>
using namespace std;
int main(){


int t; scanf("%d",&t);
while(t--){
        map<int,int>mp;
int n; cin>>n;
for(int i=0;i<n;i++){
    int x; cin>>x;
    mp[x]++;
}
int cnt=0;
for(auto x:mp){
    if(x.second>=3){
        cout<<x.first<<endl;
        cnt++;
        break;


    }
}

  if(cnt==0)cout<<-1<<endl;


}


return 0;
}

