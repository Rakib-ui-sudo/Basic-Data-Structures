#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

     int cou [256]= {0};
     for (int i = 0; i <s.size(); i++)
     {
        int val = s[i];
        cou[val] ++; 
     }

     for (int i = 0; i < 256; i++)
     {
       if (cou[i] >0)  
        {
            char a=i;
            cout<<a<<" : "<<cou[i]<<endl;
        }
     }

          
    return 0;
}