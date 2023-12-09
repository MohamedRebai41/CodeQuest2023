#include <stdio.h>

int main() {
    char s[1000001];  // Assuming a maximum length of 10^6 + 1 for the string
    int N;
    char* msg = "NO";
    
    scanf("%d", &N);
    scanf("%s", s);

    for (int i = 0; i < N; ++i) {
        if (s[i] == 'W') {
            msg = "YES";
            break;
        }
    }

    printf("%s", msg);
    return 0;
}
