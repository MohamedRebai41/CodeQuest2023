#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans;
        int lastOne = -1, firstZero = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                lastOne = i;
            if (s[i] == '0')
            {
                firstZero = i;
                break;
            }
        }
        if (lastOne != -1 && firstZero != s.length())
            ans = firstZero - lastOne + 1;
        else if (lastOne == -1 && firstZero == s.length())
        {
            ans = firstZero;
        }
        else
        {
            ans = firstZero - lastOne;
        }
        cout << ans << endl;
    }
    return 0;
}