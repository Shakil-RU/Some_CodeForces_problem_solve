#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    float sum=0;
    for(int i=0; i<n; i++)
    {
       cin>>s[i];
        sum=sum+s[i];
    }
    cout<<sum/n<<endl;

    return 0;
}
