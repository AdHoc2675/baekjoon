class Solution {
    public boolean solution(String s) {
        boolean answer = true;

        try {
            int i = Integer.parseInt(s);
        } catch (NumberFormatException nfe) {
            System.out.println(s);
            return false;

        }

        if (s.length() != 4 && s.length() != 6){
            return false;
        }

        return answer;
    }
}