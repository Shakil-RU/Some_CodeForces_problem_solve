#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int ans=0;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            int cnt=0;
      if(s[i]=='a')
      {
          while(i<s.size()&&s[i]=='a')
          {
              i++;
              cnt++;
          }
          i--;
      }
        else
      {
          while(i<s.size()&&s[i]=='b')
          {
              i++;
              cnt++;
          }
          i--;
      }
      if(cnt<=1)
      {
          ans=1;
          break;
      }
        }
              if(ans==0)
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
