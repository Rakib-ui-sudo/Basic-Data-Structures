#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 //Uper--------------------------------------------------
    int space=1;
    int slash=n/2;
    int mid_space=n-2; 
    for (int i = 1; i <=slash; i++)
    {
       cout<<"\\";
       
       for (int j = 1; j <=mid_space; j++)//mid_space
       {
         cout<<" ";
       }  
       cout<<"/"<<endl;

        for (int j = 1; j <=space ; j++)
        {
           cout<<" ";
        }
        
        //cout<<"X";
       
       space++;
       mid_space-=2;
    }
 //-----------------------------End----------------------------
    cout<<"X";
//Lowe==============================================================
    cout<<endl;
    int space2=(n-3)/2;
    int slash2=n/2;
    int mid_space2=1;
    for (int i = 1; i <=slash2; i++)
    {
       for (int j = 1; j <=space2; j++)
       {
          cout<<" ";
       }
       
       cout<<"/";
       
       for (int j = 1; j <=mid_space2; j++)
       {
          cout<<" ";
       }
       
       cout<<"\\"<<endl;
        
       space2--;
       mid_space2+=2;
    }   
  //-========>>=========>>==========>>================== 
    
    
    return 0;
}