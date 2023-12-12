#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans;
        int lastOne = -1, firstZero = n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                lastOne = i;
            if (s[i] == '0')
            {
                firstZero = i;
                break;
            }
        }
        if (lastOne != -1 && firstZero != n)
            ans = firstZero - lastOne + 1;
        else if (lastOne == -1 && firstZero == n)
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