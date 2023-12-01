class Solution {
    public String convert(String s, int numRows) {
        String outputString = "";
        String[] rows = new String[1000];
        for(int i=0; i<rows.length; i++){
            rows[i] = "";
        }
        int j = 0;
        boolean reverse = false;
        for(int i=0; i<s.length(); i++){
            rows[j] += s.charAt(i);
            if(reverse == false)
                j++;
            if(reverse == true)
                j--;
            if(j == numRows-1)
                reverse = true;
            if(j == 0)
                reverse = false;
        }
        j = 0;
        while(rows[j] != ""){
            outputString += rows[j];
            j++;
        }
        return outputString;
    }
}
