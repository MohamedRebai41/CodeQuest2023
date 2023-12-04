#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    int ai, bi;
    bool turn = true;
    cout << a.size() << endl;
    for (int i = 0; i < n; i++) {
        ai = a[i] - '0';
        bi = b[i] - '0';
        if (ai < bi) turn = !turn;
        else if (ai == bi) break;
    }
    cout << ((turn) ? "Luffy" : "Zoro");

    return 0;
}
