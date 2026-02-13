class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> vis(n+1,0);
        vector<int> trusts(n+1,0);
        for(int i=0;i<trust.size();i++){
            vis[trust[i][1]]++;
            trusts[trust[i][0]]++;
        }

        for(int i=1;i<n+1;i++){
            // if(vis[i]==n-1){return i;}
            if( vis[i]==n-1 && trusts[i]==0) return i;
        }
        return -1;

    }
};