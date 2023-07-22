import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<scoreAndIndex> scoreAndIndex = new ArrayList<>();
        int sumOfTopFive = 0;

        for (int i = 0; i < 8; i++) {
            int score = sc.nextInt();

            scoreAndIndex.add(new scoreAndIndex(score, i + 1));
        }

        // 내림차순 정렬
        Collections.sort(scoreAndIndex);

        // 가장 높은 점수 5개의 번호를 저장할 배열
        int[] indexOfTopFive = new int[5];

        for (int i = 0; i < 5; i++) {
            sumOfTopFive = sumOfTopFive + scoreAndIndex.get(i).score;
            indexOfTopFive[i] = scoreAndIndex.get(i).index;
        }

        // 오름차순 정렬
        Arrays.sort(indexOfTopFive);

        System.out.println(sumOfTopFive);

        for (int i = 0; i < 5; i++) {
            System.out.print(indexOfTopFive[i] + " ");
        }
        sc.close();
    }
}

// 2가지 데이터를 저장할 클래스
class scoreAndIndex implements Comparable<scoreAndIndex> {
    public int score;
    public int index;

    // 객체를 정렬하는 것은
    // https://www.daleseo.com/java-comparable-comparator/ 참고

    public scoreAndIndex(int score, int index) {
        this.score = score;
        this.index = index;
    }

    public int getScore() {
        return this.score;
    }

    @Override
    public int compareTo(scoreAndIndex sNi) {
        return sNi.score - getScore();
    }
}