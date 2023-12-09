import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        String s = scanner.next();
        String msg = "NO";

        for (int i = 0; i < N; ++i) {
            if (s.charAt(i) == 'W') {
                msg = "YES";
                break;
            }
        }

        System.out.println(msg);
    }
}
