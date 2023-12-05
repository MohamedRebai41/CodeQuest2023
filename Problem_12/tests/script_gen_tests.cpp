#include<bits/stdc++.h>  
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

int main() {
    int tests = 30;

    char *fileName = getFilename(1, tests);
    freopen(fileName, "w", stdout);
    cout << 5 << " " << 700 << endl
         << 300 << " " << 200 << " " << 500 << " " << 100 << " " << 700 << endl;
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(2, tests);
    freopen(fileName, "w", stdout);
    cout << 4 << " " << 500 << endl;
    cout << 700 << " " << 200 << " " << 300 << " " << 100 << endl;
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(3, tests);
    freopen(fileName, "w", stdout);
    cout << 100000 << " " << 100000000000 << endl;
    long long j = 1000000000;
    for(int i = 0; i < 100000; i++) cout << j-- << " ";
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(4, tests);
    freopen(fileName, "w", stdout);
    cout << 100000 << " " << 10000000000000 << endl;
    j = 1000000000;
    for(int i = 0; i < 100000; i++) cout << j-- << " ";
    fclose(stdout);
    delete[] fileName;


    fileName = getFilename(5, tests);
    freopen(fileName, "w", stdout);
    cout << 100000 << " " << 10000000000000 << endl;
    j = 1000000000;
    for(int i = 0; i < 100000; i++) cout << j << " ";
    fclose(stdout);
    delete[] fileName;    

    for(int i = 6; i <= tests; i++){
        char *fileName = getFilename(i, tests);
        freopen(fileName, "w", stdout);
        int n = randomInt(1000,100000);
        long long l = randomInt(10000,1000000);
        l *= l; 
        cout << n << " " << l << endl;
        for (int k = 0; k < n; k++)
        {
            cout << randomInt(1000,100000)*1000 << " ";
        }
        fclose(stdout);
        delete[] fileName;
    }
    return 0;
}