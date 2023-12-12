import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();

        for (int i = 0; i < N; ++i) {
            int len, rep;
            String s = "", input;

            len = scanner.nextInt();
            input = scanner.next();
            rep = scanner.nextInt();

            for (int j = 0; j < rep; ++j) {
                s += input;
            }

            System.out.println(s);
        }

        scanner.close();
    }
}
