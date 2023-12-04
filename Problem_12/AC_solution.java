import java.util.Scanner;
import java.util.Vector;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        long l = scanner.nextLong();

        Vector<Integer> fights = new Vector<>(n);
        for (int i = 0; i < n; i++) {
            fights.add(scanner.nextInt());
        }

        long minBounty = 0, maxBounty = l, ans = 0;
        while (minBounty <= maxBounty) {
            long currentBounty = (minBounty + maxBounty) / 2;
            long currentSum = 0;

            for (int i = 0; i < n; i++) {
                currentSum += (currentBounty + currentSum > fights.get(i) ? 100 : 0);
                if (currentBounty + currentSum > l) break;
            }

            if (currentBounty + currentSum > l) {
                maxBounty = currentBounty - 1;
            } else {
                ans = currentBounty;
                minBounty = currentBounty + 1;
            }
        }

        System.out.println(ans);
    }
}
