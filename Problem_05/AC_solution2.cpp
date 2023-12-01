#include <iostream>
using namespace std;

int extEuclidAlgo(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extEuclidAlgo(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main() {

    int occ = 0;
    int n, x0, y0, x, y, k;
    cin >> n;
//    1 = 11 * x0 + 111 * y0
    extEuclidAlgo(11, 111, x0, y0);
//    n = 11 * x + 111 * y
    x = x0 * n;
    y = y0 * n;
//    general solution
//    x = x0 + 111 * k
//    y = y0 - 11 * k;
    k = (n / 11);
//    trying to make x >= 0 and y >= 0
    x += k * 111;
    y -= k * 11;
    if (x >= 0 && y >= 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
