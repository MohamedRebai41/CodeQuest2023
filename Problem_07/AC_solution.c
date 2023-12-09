#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    long long a[n], b[n + 1];
    b[0] = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        sum += a[i];
        b[i + 1] = sum;
    }

    if (sum % 2) {
        printf("0\n");
        return;
    }

    long long dis = sum / 2;
    long long ans = 0;
    int i = 0, j = 1;

    while (i < n - 1 && j < n) {
        if (b[j] - b[i] == dis) {
            ans += n - 2;
            i++;
            j++;
        } else if (b[j] - b[i] < dis) {
            j++;
        } else {
            i++;
        }
    }

    printf("%lld\n", ans);
}

int main() {
    solve();
    return 0;
}
