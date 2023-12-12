#include <bits/stdc++.h>
using namespace std;

mt19937 rng(0);

int randomInt(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

string padNumber(int x, int size)
{
    stringstream ss;
    ss << x;
    string nbr = ss.str();
    string ans(size - nbr.size(), '0');
    return ans + nbr;
}

int nbrDigits(int x)
{
    stringstream ss;
    ss << x;
    return ss.str().size();
}

char *getFilename(int index, int maxIndex)
{
    string s = padNumber(index, nbrDigits(maxIndex));
    s = "test" + s + ".in";
    char *filename = new char[s.length() + 1];
    strcpy(filename, s.c_str());
    return filename;
}

int main()
{
    int tests = 20;
    char *fileName = getFilename(1, tests);
    freopen(fileName, "w", stdout);
    cout << 3 << endl
         << 55 << endl
         << 1122 << endl
         << 150 << endl;
    fclose(stdout);
    delete[] fileName;
    fileName = getFilename(2, tests);
    freopen(fileName, "w", stdout);
    cout << 13 << endl;
    for (int i = 0; i <= 11; i++)
    {
        cout << i << endl;
    }
    cout << 1000000000 << endl;
    fclose(stdout);
    delete[] fileName;

    for (int i = 3; i <= tests; i++)
    {
        char *fileName = getFilename(i, tests);
        freopen(fileName, "w", stdout);
        int t = randomInt(1, 1000);
        cout << t << endl;
        for (int j = 0; j < t; j++)
        {
            cout << randomInt(0, (1 << (i + 9))) << endl;
        }
        fclose(stdout);
        delete[] fileName;
    }
}