/*You are given an m x n grid where each cell can have one of three values:

0 representing an empty cell,
1 representing a fresh orange, or
2 representing a rotten orange.
Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

 */
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       queue<pair<int,int> > rotten;
        int m = grid.size();
        int n = grid[0].size();
        int total = 0, made_rotten = 0, minutes = 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2) rotten.push({i,j});
                if(grid[i][j]!=0) total++;
            }        
        }
        int dx[] = {0,0,-1,1};
        int dy[] = {1,-1,0,0};
        
        while(!rotten.empty()){
            int k = rotten.size();
            made_rotten+=k;
            while(k--){
                int x = rotten.front().first;
                int y = rotten.front().second;
                rotten.pop();
                for(int i=0;i<4;i++){
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if(nx<0 or ny<0 or nx>=m or ny>=n or grid[nx][ny]!=1)
                        continue;
                    
                      grid[nx][ny] = 2;
                      rotten.push({nx,ny});
                }
            }
            if(!rotten.empty()) minutes++;
        }
        return total==made_rotten ? minutes : -1;
    }
};