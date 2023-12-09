#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<string> tab(m);
    for (int i = 0; i < m; i++)
    {
        cin >> tab[i];
    }
    int nbp = 1;
    int j = 0;
    int count = 0;
    for (int i = n; i > 0; i--)
    {
        count++;
        if (count == nbp)
        {
            j++;
            count = 0;
        }
        if (j == m)
        {
            j = 0;
            nbp *= 2;
        }
    }
    if (j == 0 && count == 0)
        cout << tab[m - 1] << endl;
    else if (j == 0)
        cout << tab[0] << endl;
    else if (count == 0)
        cout << tab[j - 1] << endl;
    else
        cout << tab[j] << endl;
    return 0;
}