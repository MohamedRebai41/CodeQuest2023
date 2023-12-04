package Problem_09;

import java.util.ArrayList;
import java.util.Scanner;

public class AC_solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        for (int testCase = 0; testCase < t; testCase++) {
            int n = scanner.nextInt();
            
            // the arrays count the respective occurrence of A, B, AB, and O
            ArrayList<Integer> injured = new ArrayList<Integer>(4);
            ArrayList<Integer> donors = new ArrayList<Integer>(4);
            
            for (int i = 0; i < 4; i++) {
                injured.add(0);
                donors.add(0);
            }
            
            for (int i = 0; i < n; i++) {
                String s = scanner.next();
                if (s.equals("A")) {
                    injured.set(0, injured.get(0) + 1);
                } else if (s.equals("B")) {
                    injured.set(1, injured.get(1) + 1);
                } else if (s.equals("AB")) {
                    injured.set(2, injured.get(2) + 1);
                } else if (s.equals("O")) {
                    injured.set(3, injured.get(3) + 1);
                }
            }
            
            for (int i = 0; i < n; i++) {
                String s = scanner.next();
                if (s.equals("A")) {
                    donors.set(0, donors.get(0) + 1);
                } else if (s.equals("B")) {
                    donors.set(1, donors.get(1) + 1);
                } else if (s.equals("AB")) {
                    donors.set(2, donors.get(2) + 1);
                } else if (s.equals("O")) {
                    donors.set(3, donors.get(3) + 1);
                }
            }
            
            // we first check if we can satisfy the injured of blood type O
            if (injured.get(3) <= donors.get(3)) {
                donors.set(3, donors.get(3) - injured.get(3));
            } else {
                System.out.println("NO");
                continue;
            }
            
            // then we check if we can satisfy the injured of blood type B
            if (injured.get(1) <= donors.get(1) + donors.get(3)) {
                donors.set(1, Math.max(donors.get(1) - injured.get(1), 0));
                donors.set(3, donors.get(3) - Math.max(injured.get(1) - donors.get(1), 0));
            } else {
                System.out.println("NO");
                continue;
            }
            
            // then we check if we can satisfy the injured of blood type A
            if (injured.get(0) <= donors.get(0) + donors.get(3)) {
                donors.set(0, Math.max(donors.get(0) - injured.get(0), 0));
                donors.set(3, donors.get(3) - Math.max(injured.get(0) - donors.get(0), 0));
            } else {
                System.out.println("NO");
                continue;
            }
            
            // if A, B, O are all satisfied then AB is satisfied
            System.out.println("YES");
        }
    }
}
