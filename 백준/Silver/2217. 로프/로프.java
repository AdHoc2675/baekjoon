import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int current;
        int max;

        n = sc.nextInt();

        int[] rope = new int[n];

        for (int i = 0; i < n; i++) {
            rope[i] = sc.nextInt();
        }

        // 로프의 중량을 정렬
        Arrays.sort(rope);

        // 중량이 가장 큰 로프 하나만 이용했을 때
        max = rope[n - 1];

        for (int i = n - 1; i >= 0; i--) {
            // 현재 로프의 중량 (해당 로프의 중량 * 로프의 개수)
            current = rope[i] * (n - i);
            // 최대 중량보다 현재 중량이 더 크다면
            if (max < current) {
                // 최대 중량을 현재 값으로 교체
                max = current;
            }
        }

        System.out.print(max);

        sc.close();
    }
}
