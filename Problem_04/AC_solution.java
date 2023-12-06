import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            String s = scanner.next();
            int curr = 0;
            int ans = 0;

            for (int i = 0; i < n; i++) {
                if (s.charAt(i) == '.') {
                    ans = Math.max(ans, curr);
                } else if (s.charAt(i) == '#') {
                    curr++;
                } else {
                    curr = 0;
                }
            }

            curr = 0;

            for (int i = n - 1; i >= 0; i--) {
                if (s.charAt(i) == '.') {
                    ans = Math.max(ans, curr);
                } else if (s.charAt(i) == '#') {
                    curr++;
                } else {
                    curr = 0;
                }
            }

            System.out.println(ans);
        }
    }
}
