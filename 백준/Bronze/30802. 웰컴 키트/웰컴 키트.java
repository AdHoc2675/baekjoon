import java.util.Scanner;

public class Main { // 백준에서 제출시엔 클래스 명을 Main으로 바꿀것
    public static void main(String[] args) {
        int n;
        int t, p;

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();

        int[] shirt_sizes = new int[6];

        for (int i = 0; i < 6; i++) {
            shirt_sizes[i] = sc.nextInt();
        }

        t = sc.nextInt();
        p = sc.nextInt();

        int tshirt = 0;
        int penPair, penCount = 0;

        for (int i = 0; i < 6; i++) {
            if (shirt_sizes[i] % t != 0) {
                tshirt = tshirt + (shirt_sizes[i] / t) + 1;
            } else {
                tshirt = tshirt + (shirt_sizes[i] / t);
            }
        }

        penPair = n / p;
        penCount = n % p;

        System.out.print(tshirt + "\n" + penPair + " " + penCount);
        sc.close();
    }
}