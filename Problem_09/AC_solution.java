import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        for (int testCase = 0; testCase < t; testCase++) {
            int n = scanner.nextInt();

            // The arrays count the respective occurrence of A, B, AB, and O
            int[] injured = new int[4];
            int[] donors = new int[4];

            for (int i = 0; i < n; i++) {
                String bloodType = scanner.next();
                updateCount(bloodType, injured);
            }

            for (int i = 0; i < n; i++) {
                String bloodType = scanner.next();
                updateCount(bloodType, donors);
            }

            // Check if we can satisfy the injured of blood type O
            if (injured[3] <= donors[3]) {
                donors[3] -= injured[3];
            } else {
                System.out.println("NO");
                continue;
            }

            // Check if we can satisfy the injured of blood type B
            if (injured[1] <= donors[1] + donors[3]) {
                int temp = donors[1];
                donors[1] = Math.max(donors[1] - injured[1], 0);
                injured[1] = Math.max(injured[1] - temp, 0);
                donors[3] = donors[3] - injured[1];
            } else {
                System.out.println("NO");
                continue;
            }

            // Check if we can satisfy the injured of blood type A
            if (injured[0] <= donors[0] + donors[3]) {
                int temp = donors[0];
                donors[0] = Math.max(donors[0] - injured[0], 0);
                injured[0] = Math.max(injured[0] - temp, 0);
                donors[3] = donors[3] - injured[0];
            } else {
                System.out.println("NO");
                continue;
            }

            // If A, B, O are all satisfied, then AB is satisfied
            System.out.println("YES");
        }
    }

    private static void updateCount(String bloodType, int[] countArray) {
        switch (bloodType) {
            case "A":
                countArray[0]++;
                break;
            case "B":
                countArray[1]++;
                break;
            case "AB":
                countArray[2]++;
                break;
            case "O":
                countArray[3]++;
                break;
        }
    }
}
