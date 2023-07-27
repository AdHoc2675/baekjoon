import java.util.Scanner;
import java.util.Vector;
import java.util.Collections;
import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int deuddoN, bodoM;

        deuddoN = sc.nextInt();
        bodoM = sc.nextInt();
        sc.nextLine();

        // 듣도 못한을 저장할 맵
        HashMap<String, Integer> deuddo = new HashMap<>(deuddoN);
        // 듣보잡을 저장할 벡터
        Vector deudbojab = new Vector<>();

        for (int i = 0; i < deuddoN; i++) {
            String str;
            str = sc.nextLine();
            // 듣도 못한 저장
            deuddo.put(str, i);
        }

        for (int i = 0; i < bodoM; i++) {
            String str;
            str = sc.nextLine();
            // 보도 못한 사람이 듣도 못한 맵에도 있는 지 확인
            // 데이터를 끝까지 찾지 못했을 경우, null를 반환
            // 데이터가 맵에 있으면 듣보잡 벡터에 추가
            if (deuddo.containsKey(str) == true) {
                deudbojab.add(str);
            }
        }

        Collections.sort(deudbojab);

        System.out.println(deudbojab.size());
        for (int i = 0; i < deudbojab.size(); i++) {
            System.out.println(deudbojab.get(i));
        }

        sc.close();
    }
}
