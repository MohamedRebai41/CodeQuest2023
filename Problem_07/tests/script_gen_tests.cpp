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

long long solve(vector<long long> a)
{
    int n = a.size();
    vector<long long> b(n + 1);
    b[0] = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        b[i + 1] = sum;
    }
    if (sum % 2)
    {
        return 0;
    }
    long long dis = sum / 2;
    long long ans = 0;
    int i = 0, j = 1;
    while (i < n - 1 && j < n)
    {
        if (b[j] - b[i] == dis)
        {
            ans += n - 2;
            i++;
            j++;
        }
        else if (b[j] - b[i] < dis)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    int tests = 20;
    char *fileName = getFilename(1, tests);
    freopen(fileName, "w", stdout);
    cout << 4 << endl
         << 3 << " " << 2 << " " << 1 << " " << 4 << endl;
    fclose(stdout);
    delete[] fileName;
    fileName = getFilename(2, tests);
    freopen(fileName, "w", stdout);
    cout << 3 << endl
         << 1 << " " << 2 << " " << 3 << endl;
    fclose(stdout);
    delete[] fileName;
    fileName = getFilename(3, tests);
    freopen(fileName, "w", stdout);
    cout << 5 << endl
         << 123 << " " << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
    fclose(stdout);
    delete[] fileName;
    fileName = getFilename(4, tests);
    freopen(fileName, "w", stdout);
    cout << 6 << endl
         << 1 << " " << 2 << " " << 3 << " " << 3 << " " << 1 << " " << 2 << endl;
    fclose(stdout);
    delete[] fileName;
    int counter = 0;
    for (int i = 5; i <= 20; i++)
    {
        char *fileName = getFilename(i, tests);
        freopen(fileName, "w", stdout);
        int t = randomInt(1, 1000);
        cout << t << endl;
        vector<long long> a(t);
        for (int j = 0; j < t; j++)
        {
            a[j] = randomInt(1, 1000);
        }
        while (solve(a) == 0)
        {
            for (int j = 0; j < t; j++)
            {
                a[j] = randomInt(1, 1000);
            }
        }
        cout << a[0];
        for (int j = 1; j < t; j++)
        {
            cout << " " << a[j];
        }
        fclose(stdout);
        delete[] fileName;
    }
    tests = 50;
    fileName = getFilename(21, tests);
    freopen(fileName, "w", stdout);
    int t = 100000;
    cout << t << endl;
    cout << 1000000000;
    for (int i = 1; i < t; i++)
    {
        cout << " " << 1000000000;
    }
    fclose(stdout);
    delete[] fileName;
    fileName = getFilename(22, tests);
    freopen(fileName, "w", stdout);
    t = 100;
    cout << "1" << endl;
    for (int i = 0; i < t; i++)
    {
        cout << " " << 1;
    }
    fclose(stdout);
    delete[] fileName;
    for (int i = 23; i < tests - 1; i++)
    {
        char *fileName = getFilename(i, tests);
        freopen(fileName, "w", stdout);
        int t = randomInt(1, 100000);
        cout << t << endl;
        vector<long long> a(t);
        for (int j = 0; j < t; j++)
        {
            a[j] = randomInt(1, 1000000000);
        }
        cout << a[0];
        for (int j = 1; j < t; j++)
        {
            cout << " " << a[j];
        }
        fclose(stdout);
        delete[] fileName;
    }
    fileName = getFilename(tests - 1, tests);
    freopen(fileName, "w", stdout);
    cout << 5 << endl
         << 1 << " " << 4 << " " << 1 << " " << 2 << " " << 2 << endl;
    fclose(stdout);
    delete[] fileName;
    fileName = getFilename(tests, tests);
    freopen(fileName, "w", stdout);
    cout << 3 << endl
         << 2 << " " << 2 << " " << 2 << endl;
    fclose(stdout);
    delete[] fileName;

    return 0;
}