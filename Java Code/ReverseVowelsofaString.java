class Solution {
    public String reverseVowels(String s) {
        char[] str = s.toCharArray();
        int i = 0, j = str.length - 1;
        
        while (i < j) {
            while(!isVowel(str[i]) && i < j)
                i++;
            while(!isVowel(str[j]) && j > i)
                j--;
            
            char temp = str[i];
            str[i++] = str[j];
            str[j--] = temp;
        }
        
        return String.valueOf(str);
    }
    
    boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
}
