#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   vector<long long int>a(n);
   //array input
   for (int i = 0; i <n; i++)
   {
     cin>>a[i];
   }
   //prefix Array
   vector<long long int>pfx(n);
   //prefix input
   pfx[0]=a[0];
   for (int i = 1; i <n; i++)
   {
      pfx[i]=pfx[i-1]+a[i];
   }

   //print..
   for (int i = n-1; i >=0; i--)
   {
      cout<<pfx[i]<<" ";
   }
   

    return 0;
}