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

    vector<string> couples;
    for(int i=0;i<=25;i++){
        for(int j=0;j<=25;j++){
            if(i!=j)
            {
                string s(3,'A');
                s[1] = ' ';
                s[0] = (char)('A' + i);
                s[2] = (char)('A' + j);
                couples.push_back(s);
            }
        }
    }

     int tests = 20;
    // char* fileName = getFilename(1, tests);
    // freopen(fileName, "w" , stdout);
    // cout << "5 4" << endl;
    // cout << "A B C Z A" << endl <<  "A I O C O" << endl;
    // cout << "O B" << endl << "O Z" << endl << "I A" << endl << "Y X";
    // fclose(stdout);
    // delete[] fileName;
    for(int i=35;i<=50; i++)
    {
        char* fileName = getFilename(i, tests);
        freopen(fileName, "w" , stdout);
        int n = 100;
        int m = randomInt(0,100);
        cout << n << ' ' << m << endl;
        for(int k = 0 ; k<n ; k++)
        {
            char c = (char) ('A' + randomInt(0,25));
            cout << c << ' ';
        }
        cout << endl;
        for(int k = 0 ; k<n ; k++)
        {
            char c = (char) ('A' + randomInt(0,25));
            cout << c << ' ';
        }
        cout << endl;        
        unordered_set<int> picked;
        for(int k=0;k<m;k++)
        {
            int x = randomInt(0,649);
            while(picked.find(x) != picked.end())
            {
                x = randomInt(0,649);
            }
            picked.insert(x);
            cout << couples[x] << endl;
        }




        fclose(stdout);
        delete[] fileName;
    }




}