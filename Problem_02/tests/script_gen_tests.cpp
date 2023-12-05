#include<bits/stdc++.h> 
using namespace std;

mt19937 rng(0);

int randomInt(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }


string padNumber(int x, int size) {
    stringstream ss;
    ss << x;
    string nbr = ss.str();
    string ans(size-nbr.size(),'0');
    return ans+nbr;
}

int nbrDigits(int x) {
    stringstream ss;
    ss << x;
    return ss.str().size();
}

char* getFilename(int index, int maxIndex) {
    string s = padNumber(index, nbrDigits(maxIndex));
    s = "test" + s + ".in";
    char* filename = new char[s.length() + 1];
    strcpy(filename, s.c_str());
    return filename;
}

int main() {
    int tests = 83;

    char* fileName = getFilename(1, tests);
    freopen(fileName, "w" , stdout);
    cout << 3 << endl << 234 << endl << 155 << endl;
    fclose(stdout);
    delete[] fileName;
    
    fileName = getFilename(2, tests);
    freopen(fileName, "w" , stdout);
    cout << 4 << endl << 2394 << endl << 1595 << endl;
    fclose(stdout);
    delete[] fileName;

    int inputSize;
    string a, b;
    for (int i = 3; i < 60; ++i) {
        fileName = getFilename(i, tests);
        freopen(fileName, "w" , stdout);
        inputSize = randomInt(1, 4e3);
        cout << inputSize << endl;
        a = ""; b = "";
        for (int j = 0; j < inputSize; ++j) {
            a += (char)(randomInt(1, 9) + '0');
            b += (char)(randomInt(1, 9) + '0');
        }
        cout << a << endl << b << endl;
        fclose(stdout);
        delete[] fileName;
    }

    for (int i = 60; i <= 77; ++i) {
        fileName = getFilename(i, tests);
        freopen(fileName, "w" , stdout);
        inputSize = randomInt(4e3, 4e6);
        cout << inputSize << endl;
        a = ""; b = "";
        for (int j = 0; j < inputSize; ++j) {
            a += (char)(randomInt(1, 9) + '0');
            b += (char)(randomInt(1, 9) + '0');
        }
        cout << a << endl << b << endl;
        fclose(stdout);
        delete[] fileName;
    }

    fileName = getFilename(78, tests);
    freopen(fileName, "w" , stdout);
    a = ""; b = "";
    cout << 4000000 << endl;
    for (int i = 0; i < 4e6; ++i) a += "5";
    b = a;
    cout << a << endl << b << endl;
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(79, tests);
    freopen(fileName, "w" , stdout);
    a = ""; b = "";
    cout << 4000000 << endl;
    for (int i = 0; i < 4e6; ++i) {
        a += "5";
        b += "7";
    }
    cout << a << endl << b << endl;
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(80, tests);
    freopen(fileName, "w" , stdout);
    a = ""; b = "";
    cout << 4000000-1 << endl;
    for (int i = 0; i < 4e6-1; ++i) {
        a += "5";
        b += "7";
    }
    cout << a << endl << b << endl;
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(81, tests);
    freopen(fileName, "w" , stdout);
    a = ""; b = "";
    cout << 4000000 << endl;
    int choice;
    for (int i = 0; i < 4e6; ++i) {
        choice = randomInt(1, 10);
        if (choice > 5) {
            a += "5";
            b += "7";
        } else {
            b += "5";
            a += "7";
        }
    }
    cout << a << endl << b << endl;
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(82, tests);
    freopen(fileName, "w" , stdout);
    cout << 1 << endl << 1 << endl << 3 << endl;
    fclose(stdout);
    delete[] fileName;

    fileName = getFilename(83, tests);
    freopen(fileName, "w" , stdout);
    cout << 1 << endl << 4 << endl << 1 << endl;
    fclose(stdout);
    delete[] fileName;

    return 0;
}