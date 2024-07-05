class Solution {
    public String removeStars(String s) {
        int stars = 0;
        StringBuilder sb = new StringBuilder(s);
        
        for (int i = s.length() - 1; i >= 0; --i){
            if(s.charAt(i) == '*'){
                while(s.charAt(i) == '*' || stars > 0){
                    if (s.charAt(i) == '*'){
                        sb.deleteCharAt(i);
                        i--;
                        stars++;
                    } else if (stars > 0) {
                        sb.deleteCharAt(i);
                        i--;
                        stars--;
                    }
                    
                    if ( i == -1)
                        return sb.toString();
                }
            }
        }
                
        return sb.toString();
    }
}
