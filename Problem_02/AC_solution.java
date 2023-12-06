import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String a = scanner.next();
        String b = scanner.next();
        int ai, bi;
        boolean turn = true;

        for (int i = 0; i < n; i++) {
            ai = a.charAt(i) - '0';
            bi = b.charAt(i) - '0';
            if (ai < bi) {
                turn = !turn;
            } else if (ai == bi) {
                break;
            }
        }

        System.out.println(turn ? "Luffy" : "Zoro");
    }
}
