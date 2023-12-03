import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        scanner.nextLine();

        while (t-- > 0) {
            int n = scanner.nextInt();
            String s = scanner.nextLine();
            int ans = 0;
            int lastOne = -1, firstZero = n;

            for (int i = 0; i < n; i++) {
                if (s.charAt(i) == '1') {
                    lastOne = i;
                }
                if (s.charAt(i) == '0') {
                    firstZero = i;
                    break;
                }
            }

            if (lastOne != -1 && firstZero != n) {
                ans = firstZero - lastOne + 1;
            } else if (lastOne == -1 && firstZero == n) {
                ans = firstZero;
            } else {
                ans = firstZero - lastOne;
            }

            System.out.println(ans);
        }

        scanner.close();
    }
}
