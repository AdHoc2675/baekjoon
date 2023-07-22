import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int benchmarkPi;
        int afterBenchmarkPi;

        int height = 0, maxHeight = 0;
        int curruntHeight = 0;

        n = sc.nextInt();
        benchmarkPi = sc.nextInt();

        for (int i = 1; i < n; i++) {

            afterBenchmarkPi = sc.nextInt();

            if (benchmarkPi < afterBenchmarkPi) {
                height = afterBenchmarkPi - benchmarkPi;
                curruntHeight = curruntHeight + height;

                if (curruntHeight > maxHeight) {
                    maxHeight = curruntHeight;
                }
            } else {
                height = 0;
                curruntHeight = 0;
            }

            benchmarkPi = afterBenchmarkPi;
        }

        System.out.print(maxHeight);

        sc.close();
    }
}
