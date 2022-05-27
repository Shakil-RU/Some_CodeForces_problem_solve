#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int count1=0,count2=0,count3=0;
    for(int i=0;i<s1.length();i++){
         s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }

    for(int i=0 ;i<s1.size();i++)
    {

        if(s1[i]>s2[i]){
            count1=1;
            break;
        }
        else if(s2[i]>s1[i]){
            count2=1;
            break;
        }
        else{
            count3++;
        }
    }

    if(count3==s1.size()){
        cout<<0<<endl;
    }

   else if(count1==1){
            cout<<1<<endl;

    }
    else if(count2==1){
        cout<<-1<<endl;
    }



return 0;
}
