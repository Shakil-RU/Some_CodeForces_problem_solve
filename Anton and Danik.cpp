#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,count=0,count1=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n ;i++)
    {

        if(s[i]=='A')
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    if(count<count1)
    {
        cout<<"Danik"<<endl;
    }
    else if(count>count1)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }


    return 0;
}
