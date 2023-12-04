import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int q = scanner.nextInt();

        int[][] matrix = new int[2002][2002];
        int[][] prefixSum = new int[2002][2002];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j - 1];
            }
        }

        for (int k = 0; k < q; k++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();

            if (prefixSum[x - 1][y - 1] == prefixSum[Math.min(n - x, m - y) + x][Math.min(n - x, m - y) + y] - prefixSum[x][y]) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        scanner.close();
    }
}
