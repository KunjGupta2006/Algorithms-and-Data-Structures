int count1s(int n) {
    int c=0;
    //Brian Kernighan's Algorithm
    while(n){
        c++;
        n= n & (n-1); 
    }
    return c;
}
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++){
            ans[i]=count1s(i);
        }
        return ans;
    }
};