#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n%10!=4||n%10!=7)
    {
      cout<<"NO"<<endl;
    }
    else // if(n/10==4||n/10==7)
        cout<<"YES"<<endl;
    return 0;
}
