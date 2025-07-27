package spoj;

import java.util.*;

class Main {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int num = sc.nextInt();
            if (num == 42) {
                break;
            }
            System.out.println(num);
        }

        sc.close();
    }
}