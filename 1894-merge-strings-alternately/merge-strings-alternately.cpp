class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int c1=0,c2=0;
        int l1=word1.length()-1;
        int l2=word2.length()-1;
        while(c1<=l1 && c2<=l2){
            s+=word1[c1++];
            s+=word2[c2++];
        }
        if(c1<=l1){
            s.append(word1,c1,l1-c1+1);
        }
        if(c2<=l2){
            s.append(word2,c2,l2-c2+1);
        }
        return s;
    }
};