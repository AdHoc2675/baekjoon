import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m, n;

        String numDic[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

        m = sc.nextInt();
        n = sc.nextInt();

        List<numToStr> numToStrArr = new ArrayList<>();

        for (int i = m; i <= n; i++) {
            if (i >= 10) {
                String tmepStr = numDic[i / 10] + " " + numDic[i % 10];
                numToStrArr.add(new numToStr(tmepStr, i));
            } else {
                String tmepStr = numDic[i % 10];
                numToStrArr.add(new numToStr(tmepStr, i));
            }
        }

        // 오름차순 정렬
        Collections.sort(numToStrArr);

        for (int i = 0; i < numToStrArr.size(); i++) {
            System.out.print(numToStrArr.get(i).num + " ");

            if (i % 10 == 9) {
                System.out.print("\n");
            }
        }

        sc.close();
    }
}

// 2가지 데이터를 저장할 클래스
class numToStr implements Comparable<numToStr> {
    public String str;
    public int num;

    // 객체를 정렬하는 것은
    // https://www.daleseo.com/java-comparable-comparator/ 참고

    public numToStr(String tmepStr, int i) {
        this.str = tmepStr;
        this.num = i;
    }

    public int compareTo(numToStr n2s) {
        return this.str.compareTo(n2s.str);
    }
}