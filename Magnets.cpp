#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(array[i]!=array[i+1])
            {
                count++;
            }
    }
    cout<<count<<endl;
    return 0;
}
