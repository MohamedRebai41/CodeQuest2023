import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int nbM = scanner.nextInt();
        String[] s = new String[nbM];
        for (int i = 0; i < nbM; i++) {
            s[i] = scanner.next();
        }

        int i = 0;
        int a = nbM;
        int sum = 0;

        while ((sum + a) <= n) {
            sum += a;
            a = a * 2;
            i++;
        }

        int b = n - sum;
        int x = (int) Math.pow(2, i);
        int j = 0;

        if (b != 0) {
            j = b / x;
            if (b % x != 0) {
                j++;
            }
            System.out.println(s[j - 1]);
        } else {
            System.out.println(s[nbM - 1]);
        }
    }
}
