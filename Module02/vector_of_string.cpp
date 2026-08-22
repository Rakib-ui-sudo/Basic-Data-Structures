#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //cin.ignore();//somosa
    string dummy;
    getline(cin, dummy); // ✅ বাকি লাইনটা খালি করে দেয়
    vector<string>v(n);
    for (int i = 0; i <n; i++)
    {
        //cin>>v[i];clear

        getline(cin,v[i]);
    }

    for (string s:v)
    {
        cout<<s<<endl;
    }
    
    
    return 0;
}