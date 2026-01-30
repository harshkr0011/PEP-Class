class Solution {
public:
    bool PalindromeHelper(string s, int start, int end){
        while(start < end){
            if(s[start] == s[end]){
                start++;
                end--;
            }else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start  = 0;
        int end = s.size()-1;
        while(start < end){
            if(s[start] == s[end]){
                start++;
                end--;
            }else{
                return PalindromeHelper(s, start+1, end) || PalindromeHelper(s, start, end-1);
            }
        }
        return true;
    }
};