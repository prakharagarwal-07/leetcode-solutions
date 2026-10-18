class Solution {
public:

int ansRow = -1;
int ansCol = -1;

    void trav( int row , int col , int m , int n ,int prevRow , int prevCol , vector<vector<bool>> &visit , vector<vector<char>> &grid){

        if( row < 0 || row >= m || col < 0 || col >= n || visit[row][col] == true ){

            ansRow = prevRow;
            ansCol = prevCol;

            return;
        }

        visit[row][col] = true;

        if( grid[row][col] == 'L' ){

            trav( row , col-1 , m , n , row , col , visit , grid);
        }
          if( grid[row][col] == 'R' ){

            trav( row , col+1 , m , n , row , col , visit, grid);
        }
          if( grid[row][col] == 'U' ){

            trav( row-1, col , m , n , row , col , visit, grid);
        }
          if( grid[row][col] == 'D' ){

            trav( row+1 , col , m , n , row , col , visit, grid );
        }

    }
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> visit( m , vector<bool>( n , false ));

        int row = 0;
        int col = 0;
        int prevRow = -1;
        int prevCol = -1;

        trav( row , col , m , n ,  prevRow , prevCol  , visit , grid);

        return {ansRow , ansCol};

       
        
    }
};