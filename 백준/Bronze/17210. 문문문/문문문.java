import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long numOfDoor;
        int firstDoorOpen;

        numOfDoor = sc.nextLong();
        firstDoorOpen = sc.nextInt();

        // 규칙 3과 규칙 4는 서로 충돌한다
        // 규칙2에 의해, 2번째 문과 3번째 문은 다른 방법으로 열어야 한다.
        // 그런데 6번째 문은 열고 닫음에 상관 없이 규칙 3 또는 규칙 4를 위배하게 된다.
        // 그러므로, 문의 개수가 6개 이상이면 탈출이 불가능하다.

        if (numOfDoor >= 6) {
            System.out.print("Love is open door");
        } else {
            for (int i = 1; i < numOfDoor; i++) {
                if (firstDoorOpen == 1) {
                    firstDoorOpen = 0;
                } else {
                    firstDoorOpen = 1;
                }
                System.out.println(firstDoorOpen);
            }
        }

        sc.close();
    }
}
