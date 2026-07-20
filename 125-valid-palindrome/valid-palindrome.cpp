#include<string.h>
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int l=0;
        int h=s.length()-1;
        while(l<=h){
            if( !isalnum(s[l]) || s[l]==' '){ l++;continue;}
            if( !isalnum(s[h]) || s[h]==' '){ h--;continue;}
            if( s[l]!=s[h] ){ return false; }
            l++;h--;
        }
        return true;


        // int l=s.length();
        // if (l>=1 && l<=200000){
        //     int i = 0;
        //     while(i < l){
        //         if (!isalnum(s[i]) || s[i] == ' '){
        //             s.erase(i,1);
        //             l--;
        //         }else i++;
        //     }
        //     if (s=="") return true;
        //     for (int i = 0; i <l; i++){s[i] = tolower(s[i]);}
        //     int st=0,e=l-1;
        //     while(st<=e){
        //         if(s[st]!=s[e])return false;
        //         ++st;
        //         --e;
        //     }      
        // }
        // return true;      
    }
};