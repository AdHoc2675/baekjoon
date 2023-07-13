import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int brokenString;
        int numOfBrand;

        brokenString = sc.nextInt();
        numOfBrand = sc.nextInt();

        // 각 브랜드의 패키지 가격
        int[] packagePrice = new int[numOfBrand];
        // 낱개의 가격
        int[] singlePrice = new int[numOfBrand];
        // 가장 저렴한 가격을 저장할 변수
        int minPrice = 1000;
        // 필요한 종합 돈
        int totalPrice = 0;

        for (int i = 0; i < numOfBrand; i++) {
            packagePrice[i] = sc.nextInt();
            singlePrice[i] = sc.nextInt();

            if (minPrice > packagePrice[i]) {
                minPrice = packagePrice[i];
            }

            if (minPrice > singlePrice[i] * 6) {
                minPrice = singlePrice[i] * 6;
            }
        }

        while (true) {
            if (brokenString < 6) {
                break;
            }

            totalPrice = totalPrice + minPrice;

            brokenString = brokenString - 6;
        }

        minPrice = 1000;

        for (int i = 0; i < numOfBrand; i++) {
            if (minPrice > packagePrice[i]) {
                minPrice = packagePrice[i];
            }

            if (minPrice > singlePrice[i] * brokenString) {
                minPrice = singlePrice[i] * brokenString;
            }
        }

        totalPrice = totalPrice + minPrice;

        System.out.print(totalPrice);
    }
}
