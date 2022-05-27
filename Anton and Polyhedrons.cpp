#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

    int n,count=0;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]=="Tetrahedron")
        {
            count=count+4;
        }
         else if(arr[i]=="Cube")
        {
            count=count+6;
        }
          else if(arr[i]=="Octahedron")
        {
            count=count+8;
        }
          else if(arr[i]=="Dodecahedron")
        {
            count=count+12;
        }
          else if(arr[i]=="Icosahedron")
        {
            count=count+20;
        }

    }
    cout<<count<<endl;
    return 0;
}
