#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        char c;
        string s;
        cin >> n >> c >> s;

        if(c=='g')
        {
            cout<<0<<endl;
        }
        else
        {

        string t = s + s;
        long long ans = 0;

        for (long long i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                for (long long j = i + 1; j < 2*n; j++)
                {
                    if (t[j] == 'g')
                    {
                        ans = max(ans, j - i);
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }
    }
}
