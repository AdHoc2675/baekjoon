import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int x;
        int sumPairCount = 0;

        n = sc.nextInt();

        int[] arrayVector = new int[n];

        for (int i = 0; i < n; i++) {
            int input;
            input = sc.nextInt();

            arrayVector[i] = input;
        }

        x = sc.nextInt();

        // 오름차순으로 정렬
        Arrays.sort(arrayVector);

        // 합할 두 수의 index를 나타낼 변수
        // 투 포인터 알고리즘을 이용
        // 앞과 뒤부터 포인터를 출발
        int firstNum = 0, secondNum = n - 1;

        while (true) {
            // 두 포인터가 만날 때, 반복 종료
            if (firstNum == secondNum) {
                break;
            }

            // 두 수의 합이 x와 같으면
            if (arrayVector[firstNum] + arrayVector[secondNum] == x) {
                sumPairCount++;
                secondNum--;
            } else {
                // 두 수의 합이 x보다 크면
                if (arrayVector[firstNum] + arrayVector[secondNum] > x) {
                    // 뒤 포인터를 앞으로 옮겨 합을 줄인다
                    secondNum--;
                }
                // 두 수의 합이 x보다 작으면
                else {
                    // 앞 포인터를 뒤로 옮겨 합을 늘린다
                    firstNum++;
                }
            }
        }

        System.out.print(sumPairCount);
    }
}
