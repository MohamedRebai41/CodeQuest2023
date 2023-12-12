import java.util.Scanner;

public class AC_solution {
    public static void solve() {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long[] a = new long[n];
        long[] b = new long[n + 1];
        b[0] = 0;
        long totalSum = 0;

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextLong();
            totalSum += a[i];
            b[i + 1] = totalSum;
        }

        if (totalSum % 2 != 0) {
            System.out.println("0");
            return;
        }

        long targetSum = totalSum / 2;
        long ans = 0;
        int i = 0, j = 1;

        while (i < n - 1 && j < n) {
            if (b[j] - b[i] == targetSum) {
                ans += n - 2;
                i++;
                j++;
            } else if (b[j] - b[i] < targetSum) {
                j++;
            } else {
                i++;
            }
        }

        System.out.println(ans);
    }

    public static void main(String[] args) {
        solve();
    }
}
