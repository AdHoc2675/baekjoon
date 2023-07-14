import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int testCase;

        int xOne;
        int yOne;
        int rOne;

        int xTwo;
        int yTwo;
        int rTwo;

        testCase = sc.nextInt();

        for (int i = 0; i < testCase; i++) {
            // 이 문제는 두 원의 접점 갯수를 구하는 문제.
            // x1, y1을 중심으로 가지고 r1의 반지름을 가지는 원과
            // x2, y2를 중심으로 가지고 r2의 반지름을 가지는 원의 접점의 갯수를 구하는 것이다.

            xOne = sc.nextInt();
            yOne = sc.nextInt();
            rOne = sc.nextInt();
            xTwo = sc.nextInt();
            yTwo = sc.nextInt();
            rTwo = sc.nextInt();

            // 두 원의 중심점의 거리를 구한다.
            // 두 점의 거리는 x 좌표값 차이의 제곱과 y 좌표값 차이의 제곱을 더한 값에 루트를 취한것과 같다
            // (피타고라스의 정리)
            float distance = (float) (Math.pow((xOne - xTwo), 2) + Math.pow((yOne - yTwo), 2));
            distance = (float) Math.sqrt(distance);

            // 접점이 두 개인 경우
            // 두 원의 반지름을 더한 값이 중심 거리보다 크고
            if (distance < rOne + rTwo) {
                // 큰 원의 반지름에서 작은 원의 반지름을 뺀 것이 중심 거리보다 작은 경우
                if (distance > Math.abs(rOne - rTwo)) {
                    System.out.println("2");
                }
            }

            // 접점이 한 개인 경우
            // 두 원의 반지름 합이 중심 거리와 같은 경우 (외접)
            if (distance == rOne + rTwo) {
                System.out.println("1");
            }
            // 또는 큰 원의 반지름에서 작은 원의 반지름을 뺀 것이 중심 거리와 같은 경우 (내접)
            // 접점이 무한인 경우를 피하기 위해 rOne != rTwo 조건 추가
            else if (distance == Math.abs(rOne - rTwo) && rOne != rTwo) {
                System.out.println("1");
            }

            // 접점이 없는 경우
            // 두 원이 완전히 떨어져 만나지 않는 경우
            if (distance > rOne + rTwo) {
                System.out.println("0");
            }
            // 작은 원이 큰 원의 안에 있는 경우
            else if (distance < Math.abs(rOne - rTwo)) {
                System.out.println("0");
            }
            // 두 원의 중심이 같고 반지름이 다른 경우
            else if ((int) distance == 0 && rOne != rTwo) {
                System.out.println("0");
            }
            // 두 원의 중심이 같고 반지름이 같은 경우는 접점이 무한
            if ((int) distance == 0 && rOne == rTwo) {
                System.out.println("-1");
            }

        }
    }
}
