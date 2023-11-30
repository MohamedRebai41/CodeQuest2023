import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            boolean test = false;

            for (int r = 0; r < 11; r++) {
                if ((n - 111 * r) >= 0 && (n - 111 * r) % 11 == 0) {
                    test = true;
                    break;
                }
            }

            if (test) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}