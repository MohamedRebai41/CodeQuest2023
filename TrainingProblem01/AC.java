import java.util.Scanner;

public class AC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long x, y;
        char op;

        x = scanner.nextLong();
        op = scanner.next().charAt(0);
        y = scanner.nextLong();

        if (op == '+') {
            System.out.println(x + y);
        } else if (op == '*') {
            System.out.println(x * y);
        }

        scanner.close();
    }
}
