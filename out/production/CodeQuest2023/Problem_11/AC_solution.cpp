#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nbM;
    cin >> nbM;
    string s[nbM];
    for (int i = 0; i < nbM; i++)
    {
        cin >> s[i];
    }
    int i = 0;
    int a = nbM;
    int sum = 0;
    while ((sum + a) <= n)
    {
        sum += a;
        a = a * 2;
        i++;
    }
    int b = n - sum;
    int x = pow(2, i);
    int j = 0;
    if (b != 0)
    {
        j = b / x;
        if (b % x != 0)
        {
            j++;
        }
        cout << s[j - 1] << endl;
    }
    else
    {
        cout << s[nbM - 1] << endl;
    }
}