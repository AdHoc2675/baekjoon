import java.util.Scanner;
import java.lang.Math;

public class baekjoon15829 { // 제출시 Main
    public static long mathPow(int r, int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result = r * result;
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int l;
        int r = 31;
        int m = 1234567891;
        long hash = 0;
        long power;
        String str;

        l = s1.nextInt();

        str = s1.next();

        for (int i = 0; i < l; i++) {
            power = mathPow(r, i);
            hash = (hash + (Character.getNumericValue(str.charAt(i)) - (9)) * (int) Math.pow(r, i)) % m;
        }

        System.out.println(hash);

        s1.close();
    }
}
