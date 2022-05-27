#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 77, 92};
   //int n=sizeof(arr);
   int low=0, high=7-1;
   int num=77; //cin>>num;

   while(low<=high)
   {
       int mid=(high+low)/2;
       if(num==arr[mid])
       {
           cout<<"Found at position "<<mid+1<<endl;
           return 0;
       }
       else if(num>arr[mid])
       {
           low=mid+1;
       }

       else
       {
           high=mid-1;
       }
   }
   cout<<"Not found"<<endl;




    return 0;
}
