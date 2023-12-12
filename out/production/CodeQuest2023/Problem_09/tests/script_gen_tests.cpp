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
    // char* fileName = getFilename(1, tests);
    // freopen(fileName, "w" , stdout);
    // cout << 3 << endl;
    // cout << 2 << endl << "A A" << endl <<  "A B" << endl;
    // cout << 5 << endl << "A B AB O A" << endl <<  "O O O O O" << endl;
    // cout << 5 << endl << "A A A B AB" << endl <<  "O O B B B" << endl;
    // fclose(stdout);
    // delete[] fileName;
    for(int i=4;i<=4; i++)
    {
        char* fileName = getFilename(i, tests);
        freopen(fileName, "w" , stdout);
        int t = 100;
        cout<<t<<endl;
        for(int i = 0 ; i < t ; i++)
        {
            int n = randomInt(1, 2000);
            cout << n << endl;
            for(int j=0;j<n;j++)
            {
                int k = randomInt(1,4);
                if (k == 1) cout << "A ";
                else if(k == 2) cout << "B ";
                else if (k == 3) cout << "O ";
                else if (k == 4) cout << "AB ";
            }
            cout << endl;
            for(int j=0;j<n;j++)
            {
                int k = randomInt(1,4);
                if (k == 1) cout << "A ";
                else if(k == 2) cout << "B ";
                else if (k == 3) cout << "AB ";
                else if (k == 4) cout << "O ";
            }
            cout << endl;
        }
        fclose(stdout);
        delete[] fileName;
    }




}