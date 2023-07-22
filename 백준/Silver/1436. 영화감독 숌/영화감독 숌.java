import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        n = sc.nextInt();

        int movieTitle = 666;
        int indexOfMovie = 1;

        while (true) {
            // indexOfMovie가 n과 같으면 movieTitle이 n번째 종말의 숫자가 포함된것
            if (indexOfMovie == n) {
                break;
            }
            movieTitle++;
            int temp = movieTitle;

            while (true) {
                if (temp == 0) {
                    break;
                }

                // 마지막 세 자리가 666인지 확인
                if (temp % 1000 == 666) {
                    // 종말의 숫자면 indexOfMovie 1 증가
                    indexOfMovie++;
                    break;
                } else {
                    // 종말의 숫자가 아니면, 일의 자리수를 없앰
                    temp = temp / 10;
                }
            }
        }

        System.out.print(movieTitle);

        sc.close();
    }
}
