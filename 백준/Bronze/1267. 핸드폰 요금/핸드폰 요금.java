import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        // 통화의 개수 N
        int callCount;

        // 영식 요금제
        int youngsikPee = 0;
        // 민식 요금제
        int minsikPee = 0;

        int callTime;

        callCount = s1.nextInt();

        for (int i = 0; i < callCount; i++) {
            callTime = s1.nextInt();

            youngsikPee = youngsikPee + (((callTime / 30) + 1) * 10);
            minsikPee = minsikPee + (((callTime / 60) + 1) * 15);
        }

        if (youngsikPee > minsikPee) {
            System.out.print("M " + String.valueOf(minsikPee));
        } else if (youngsikPee < minsikPee) {
            System.out.print("Y " + String.valueOf(youngsikPee));
        } else {
            System.out.print("Y M " + String.valueOf(youngsikPee));
        }

        s1.close();

    }
}
