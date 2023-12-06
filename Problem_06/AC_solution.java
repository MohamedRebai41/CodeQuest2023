import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class AC_solution {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer tokenizer = new StringTokenizer(reader.readLine());
        int n = Integer.parseInt(tokenizer.nextToken());
        int m = Integer.parseInt(tokenizer.nextToken());
        int q = Integer.parseInt(tokenizer.nextToken());

        int[][] matrix = new int[2002][2002];
        int[][] prefixSum = new int[2002][2002];

        for (int i = 1; i <= n; i++) {
            tokenizer = new StringTokenizer(reader.readLine());
            for (int j = 1; j <= m; j++) {
                matrix[i][j] = Integer.parseInt(tokenizer.nextToken());
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j - 1];
            }
        }

        for (int k = 0; k < q; k++) {
            tokenizer = new StringTokenizer(reader.readLine());
            int x = Integer.parseInt(tokenizer.nextToken());
            int y = Integer.parseInt(tokenizer.nextToken());

            if (prefixSum[x - 1][y - 1] == prefixSum[Math.min(n - x, m - y) + x][Math.min(n - x, m - y) + y] - prefixSum[x][y]) {
                writer.write("YES\n");
            } else {
                writer.write("NO\n");
            }
        }

        writer.flush();
        reader.close();
        writer.close();
    }
}
