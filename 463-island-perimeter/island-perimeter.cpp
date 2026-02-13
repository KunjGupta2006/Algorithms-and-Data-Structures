class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                // if cell is water then next iteration
                if(grid[i][j]==0) continue;

                // the cell is a land
                    //check left side of cell
                    if(j==0 || grid[i][j-1]==0 ){ count++; }
                    //check right side of cell
                    if(j==cols-1 || grid[i][j+1]==0 ){ count++; }
                    //check top of cell
                    if(i==0 || grid[i-1][j]==0){count++;}
                    //check bottom of cell
                    if(i==rows-1 || grid[i+1][j]==0){count++;}

            }
        }
        return count;

    }
};