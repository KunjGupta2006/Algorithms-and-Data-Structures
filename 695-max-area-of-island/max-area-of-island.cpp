void dfs(vector<vector<int>> grid,vector<vector<int>>& vis,int i,int j,int &area){
    vis[i][j]++;
    area++;
    queue<pair<int,int>> q;
    q.push({i,j});
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        //top
        if(row-1 >=0 && grid[row-1][col] && !vis[row-1][col] ){
            area++; vis[row-1][col]++; q.push({row-1,col}); }
        //bottom
        if(row+1 < grid.size() && grid[row+1][col] && !vis[row+1][col] ){
            area++; vis[row+1][col]++; q.push({row+1,col}); }
        //left
        if(col-1 >=0 && grid[row][col-1] && !vis[row][col-1] ){
            area++; vis[row][col-1]++; q.push({row,col-1}); }
        //right
        if(col+1<grid[0].size() && grid[row][col+1] && !vis[row][col+1] ){
            area++; vis[row][col+1]++; q.push( {row,col+1} );
        }
    }
    return;
}
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] && !vis[i][j] ){
                    int area=0;
                    dfs(grid,vis,i,j,area);
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
};