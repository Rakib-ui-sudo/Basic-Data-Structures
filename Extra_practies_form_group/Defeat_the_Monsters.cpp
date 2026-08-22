#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long A, B, C;
        cin >> A >> B >> C;

        if(B >= 2 * A && C == 3 * (B - 2 * A))
            cout << "Yes"<<endl;
        else
            cout << "No"<<endl;
    }

    return 0;
}