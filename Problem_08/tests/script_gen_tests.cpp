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
    int tests = 30;
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
            int aux=randomInt(0,2);
            if (aux==0)
            {
                int k= randomInt (1,10000);
                int y=randomInt(0,10000);
                vector<int> divis;
                for (int i=2; i<(k+y-1)/2;i++)
                {
                    if ((k+y-1)%i==0) divis.push_back(i);
                }
                if (divis.size()==0) cout << randomInt (1,10000) << ' ' << randomInt (0,10000) <<' ' << randomInt (1,10000) << endl;
                else
                {
                    int pos=randomInt(0,divis.size()-1);
                    int x=divis[pos];
                    cout << x <<' '<<y<<' '<<k<<endl;
                }
            }
            else 
            {
                cout << randomInt (1,10000) << ' ' << randomInt (0,10000) <<' ' << randomInt (1,10000) << endl;
            }
        }
        fclose(stdout);
        delete[] fileName;
    }

}
