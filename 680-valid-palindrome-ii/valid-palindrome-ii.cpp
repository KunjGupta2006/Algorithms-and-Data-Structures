bool check(string s,int l,int h){
        while(l<=h){
            if( s[l]!=s[h] ){ return false; }
            l++;h--;
        }
        return true;
}


class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int h=s.length()-1;
        while(l<=h){
            if(s[l]!=s[h] ){
                if( check(s,l+1,h) ) { return true; }
                else if( check(s,l,h-1)) { return true; }
                else return false;
            }
            l++;h--;
        }
        return true;
    }
};