class Solution {
    boolean solution(String s) {
        boolean answer = true;
        
        int pCount = 0;
        int yCount = 0;
        
        String sUpper = s.toUpperCase();
        
        System.out.println(sUpper);
        
        for (int i = 0 ; i < sUpper.length() ; i++){
            if (sUpper.charAt(i) == 'P'){
                pCount++;
            } else if (sUpper.charAt(i) == 'Y'){
                yCount++;
            }
        }

        if (pCount == yCount){
            answer = true;
        } else{
            answer = false;
        }

        return answer;
    }
}