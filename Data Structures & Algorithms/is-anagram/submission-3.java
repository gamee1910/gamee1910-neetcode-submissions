class Solution {
    public boolean isAnagram(String s, String t) {
        String sortedStr1 = sortStr(s);
        String sortedStr2 = sortStr(t);
        if(sortedStr1.equals(sortedStr2)){
            return true;
        }
        return false;
    }

    public String sortStr(String inputStr){
        if(inputStr == null){
            return "";
        }
        
        char[] chars = inputStr.toCharArray();

        Arrays.sort(chars);

        return new String(chars);
    }
}
