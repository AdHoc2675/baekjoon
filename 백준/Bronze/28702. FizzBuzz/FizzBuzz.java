import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.next();
        String str2 = sc.next();
        String str3 = sc.next();

        int ansnum = 0;

        if (Character.isDigit(str1.charAt(0))) {
            ansnum = Integer.parseInt(str1) + 3;
        } else if (Character.isDigit(str2.charAt(0))) {
            ansnum = Integer.parseInt(str2) + 2;
        } else if (Character.isDigit(str3.charAt(0))) {
            ansnum = Integer.parseInt(str3) + 1;
        }

        if (ansnum % 3 == 0 && ansnum % 5 == 0) {
            System.out.println("FizzBuzz");
        } else if (ansnum % 3 == 0) {
            System.out.println("Fizz");
        } else if (ansnum % 5 == 0) {
            System.out.println("Buzz");
        } else {
            System.out.println(ansnum);
        }

        sc.close();
    }
}
