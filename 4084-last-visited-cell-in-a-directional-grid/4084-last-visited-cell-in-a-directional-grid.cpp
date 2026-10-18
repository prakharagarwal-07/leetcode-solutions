class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {

        vector<vector<bool>> visit( grid.size() , vector<bool>( grid[0].size() , false ));

        int prevRow = -1;
        int prevCol = -1;
        int row = 0;
        int col = 0;

        while( row >=0 && row < grid.size() && col >= 0 && col < grid[0].size() && visit[row][col] != true ){

            visit[row][col] = true;

            if( grid[row][col] == 'L' ){

                prevRow = row;
                prevCol = col;

                col--;

                continue;

            }
             if( grid[row][col] == 'R' ){
                 prevRow = row;
                prevCol = col;

                col++;
                continue;
                
            }
             if( grid[row][col] == 'U' ){
                 prevRow = row;
                prevCol = col;

                row--;
                continue;
                
            }
             if( grid[row][col] == 'D' ){
                 prevRow = row;
                prevCol = col;

                row++;
                continue;
                
            }

        }
        

        return { prevRow , prevCol };
        
    }
};