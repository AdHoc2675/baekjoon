import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        String word;
        int groupWordCount;

        n = sc.nextInt();
        sc.nextLine();

        groupWordCount = n;

        // 알파벳의 출현 여부를 저장할 배열. 0이면 없음, 1이면 있음. index값이 곧 알파벳에 해당
        int[] alphabetChecker = new int[26];

        for (int i = 0; i < n; i++) {
            word = sc.nextLine();

            for (int j = 0; j < 26; j++) {
                alphabetChecker[j] = 0;
            }

            // 문자열의 첫 char에 해당하는 알파벳 1로 설정
            alphabetChecker[(int) (word.charAt(0) - 97)] = 1;

            for (int j = 1; j < word.length(); j++) {
                // 문자열 내 문자들 체크
                if (word.charAt(j) == word.charAt(j - 1)) {
                    // 문자가 연속된 경우는 다음 문자 체크
                    continue;
                } else if (word.charAt(j) != word.charAt(j - 1) && alphabetChecker[(int) (word.charAt(j) - 97)] == 1) {
                    // 문자가 연속되지 않고, 현재 문자가 이미 확인된 경우는 그룹 단어가 아니므로 카운트를 하나 줄임
                    groupWordCount--;
                    break;
                } else {
                    // word[j]가 새로 등장한 문자인 경우
                    alphabetChecker[(int) (word.charAt(j) - 97)] = 1;
                }
            }
        }

        System.out.print(groupWordCount);

        sc.close();
    }
}
