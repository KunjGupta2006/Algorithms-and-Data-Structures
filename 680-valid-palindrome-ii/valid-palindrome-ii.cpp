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
        int flag=0;
        while(l<=h){
            if(s[l]!=s[h] && flag==0 ){
                if( check(s,l+1,h) ) { flag=1; l++; continue; }
                else if( check(s,l,h-1)) { flag=1; h--; continue; }
                else return false;
            }else if( s[l]!=s[h] && flag ){
                return false; 
            }
            l++;h--;
        }
        return true;
    }
};