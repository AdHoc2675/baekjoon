import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String s = bf.readLine();
        int n, k;

        StringTokenizer st = new StringTokenizer(s);

        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());

        List<Integer> numArray = new ArrayList<>();

        st = new StringTokenizer(bf.readLine());

        for (int i = 0; i < n; i++) {
            numArray.add(Integer.parseInt(st.nextToken()));
        }

        Collections.sort(numArray);

        System.out.print(numArray.get(k - 1));
    }
}
