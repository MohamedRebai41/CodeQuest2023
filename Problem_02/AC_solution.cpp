#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n = a.size(), ai, bi;
    bool turn = true;
    for (int i = 0; i < n; i++) {
        ai = a[i] - '0';
        bi = b[i] - '0';
        if (ai < bi) turn = !turn;
        else if (ai == bi) break;
    }
    cout << ((turn) ? "Luffy" : "Zoro");

    return 0;
}
