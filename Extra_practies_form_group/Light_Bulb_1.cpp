#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        string s;
        cin >> s;

        int totalOne = 0;

        for (char c : s)
        {
            if (c == '1')
                totalOne++;
        }

        int bestGain = 0;

        // প্রথম K length window
        int zero = 0;
        int one = 0;

        for (int i = 0; i < K; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }

        bestGain = max(bestGain, zero - one);

        // পরের windowগুলো
        for (int i = K; i < N; i++)
        {
            // নতুন character ঢুকবে
            if (s[i] == '0')
                zero++;
            else
                one++;

            // পুরোনো character বের হবে
            if (s[i - K] == '0')
                zero--;
            else
                one--;

            int gain = zero - one;

            bestGain = max(bestGain, gain);
        }

        cout << totalOne + bestGain << '\n';
        
    }

    return 0;
}