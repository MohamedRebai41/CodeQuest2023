#include<bits/stdc++.h>  
using namespace std;


mt19937 rng(0);



int randomInt(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }


string padNumber(int x, int size)
{
    stringstream ss;
    ss << x;
    string nbr = ss.str();
    string ans(size-nbr.size(),'0');
    return ans+nbr;
}

int nbrDigits(int x)
{
    stringstream ss;
    ss << x;
    return ss.str().size();
}

char * getFilename(int index, int maxIndex)
{
    string s = padNumber(index, nbrDigits(maxIndex));
    s = "test" + s + ".in";
    char* filename = new char[s.length() + 1];
    strcpy(filename, s.c_str());
    return filename;
}




int main() {
    int tests = 20;
    char* fileName = getFilename(1, tests);
    freopen(fileName, "w" , stdout);
    cout << 2 << endl << 8 << endl << 3 << endl << 10 << endl << 4 << endl << 1 << endl << 2 << endl;;   
    fclose(stdout);
    delete[] fileName;

    for(int i=2;i<=tests;i++)
    {
        char* fileName = getFilename(i, tests);
        freopen(fileName, "w" , stdout);
        int t = randomInt(1,1000);
        cout<<t<<endl;
        for(int j=0;j<t;j++)
        {
            cout << randomInt (1,10000) << ' ' << randomInt (1,10000) <<' ' << randomInt (0,10000) << endl;
        }
        fclose(stdout);
        delete[] fileName;
    }




}