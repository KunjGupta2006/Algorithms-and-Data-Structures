class Solution {
public:
    int maxDepth(string s) {
        int nestingdepth=0;
        int currdepth=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                currdepth+=1;
            }else if( s[i]==')' ){
                currdepth-=1;
            }
            nestingdepth=max(nestingdepth,currdepth);
        }
        return nestingdepth;
    }
};