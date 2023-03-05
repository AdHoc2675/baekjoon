import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;

        Scanner keyboard = new Scanner(System.in);

        n = keyboard.next().charAt(0);

        System.out.println(n);

        keyboard.close();
    }
}