#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    string s;
    while (true)
    {
        cin>>s;
        if (s == "end")
        {
           break;
        }
        l.push_back(s);
    }
    
    int t;
    cin>>t;
    list<string>:: iterator tmp_it;//iterator head track rakear jonno.
    while (t--)
    {
        string str;
        cin>>str;
        if (str=="visit")//problem 1
        {
            string s;
            cin>>s;
            int flag = 0;
            for( auto it = l.begin(); it != l.end(); it++)
            {
                if(*it==s)
                {
                    flag = 1;
                    cout<<*it<<endl;
                    tmp_it=it;
                    break;
                }
                
            }
            if (flag==0)
            {
                cout<<"Not Available"<<endl;
            }  
            
        }
        //--------- 1 solve --------------------------------------
        
        else if (str=="next")//problem 2;
        {
            if (tmp_it == prev(l.end()) ) //iterator ar sas ar string
            {
                cout<<"Not Available"<<endl;
            }
            else{
                tmp_it++;
                cout<<*tmp_it<<endl;
            }
            
        }
        //-----------solve 2 -----------------------------------------------
         
         else if (str=="prev")//problem 3;
        {
            
            if ( tmp_it == l.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else{
                tmp_it--;
                cout<<*tmp_it<<endl;
            }
            
        }
        
    }
    ///------ 3 solve -----------------------------------

    return 0;
}