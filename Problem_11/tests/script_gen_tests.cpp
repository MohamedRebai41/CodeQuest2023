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
     int tests = 50;
     char *fileName = getFilename(1, tests);
     freopen(fileName, "w", stdout);
     cout << 3 << endl
          << 5 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl
          << "Ulti" << endl
          << "Sasaki" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(2, tests);
     freopen(fileName, "w", stdout);
     cout << 20 << endl
          << 3 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(3, tests);
     freopen(fileName, "w", stdout);
     cout << 1000000000 << endl
          << 3 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(4, tests);
     freopen(fileName, "w", stdout);
     cout << 1 << endl
          << 5 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl
          << "Ulti" << endl
          << "Sasaki" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(5, tests);
     freopen(fileName, "w", stdout);
     cout << 10 << endl
          << 10 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl
          << "Ulti" << endl
          << "Sasaki" << endl
          << "aaa" << endl
          << "bbb" << endl
          << "ccc" << endl
          << "ddd" << endl
          << "eee" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(6, tests);
     freopen(fileName, "w", stdout);
     cout << 31 << endl
          << 10 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl
          << "Ulti" << endl
          << "Sasaki" << endl
          << "aaa" << endl
          << "bbb" << endl
          << "ccc" << endl
          << "ddd" << endl
          << "eee" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(7, tests);
     freopen(fileName, "w", stdout);
     cout << 35 << endl
          << 10 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl
          << "Ulti" << endl
          << "Sasaki" << endl
          << "aaa" << endl
          << "bbb" << endl
          << "ccc" << endl
          << "ddd" << endl
          << "eee" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(8, tests);
     freopen(fileName, "w", stdout);
     cout << 2 << endl
          << 5 << endl
          << "King" << endl
          << "Queen" << endl
          << "Jack" << endl
          << "Ulti" << endl
          << "Sasaki" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(9, tests);
     freopen(fileName, "w", stdout);
     cout << 1000000000 << endl
          << 1 << endl
          << "True" << endl;
     fclose(stdout);
     delete[] fileName;
     fileName = getFilename(10, tests);
     freopen(fileName, "w", stdout);
     cout << 2000000000 << endl
          << 1 << endl
          << "True" << endl;
     fclose(stdout);
     delete[] fileName;
     for (int i = 11; i <= tests; i++)
     {
          char *fileName = getFilename(i, tests);
          freopen(fileName, "w", stdout);
          int n = randomInt(1, 1000000000);
          cout << n << endl;
          int m = randomInt(1, 1000);
          cout << m << endl;
          // generate m diffrent strings
          for (int k = 0; k < 26; k++)
          {
               for (int l = 0; l < 26; l++)
               {
                    for (int p = 0; p < 26; p++)
                    {
                         string s = "";
                         s += (char)('a' + k);
                         s += (char)('a' + l);
                         s += (char)('a' + p);
                         cout << s << endl;
                         m--;
                         if (m == 0)
                              break;
                    }
                    if (m == 0)
                         break;
               }
               if (m == 0)
                    break;
          }
          fclose(stdout);
          delete[] fileName;
     }

     return 0;
}