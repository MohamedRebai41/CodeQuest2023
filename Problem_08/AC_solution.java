import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int k = scanner.nextInt();
            int res = 0;
            if ((k + y - 1) % x == 0) {
                res = (k + y - 1) / x;
            } else {
                res = (k + y - 1) / x + 1;
            }
            System.out.println(res);
        }
    }
}
