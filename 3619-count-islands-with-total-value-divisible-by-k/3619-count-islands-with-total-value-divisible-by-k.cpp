class Solution {
public:

    void dfs( vector<vector<int>>& grid , int row , int col , long long& sum ){

        

        if( row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] == 0 ){

            return;
        }

        sum += grid[row][col];

        grid[row][col] = 0;

        dfs( grid , row-1 , col , sum);
        dfs( grid , row , col+1 , sum);
        dfs( grid , row+1 , col , sum);
        dfs( grid , row , col-1 , sum);


    }

    int countIslands(vector<vector<int>>& grid, int k) {

        int count = 0;

        for( int i = 0 ; i < grid.size() ; i++ ){

            for( int j = 0 ; j < grid[0].size() ; j++ ){

                if( grid[i][j] != 0 ){

                    long long sum = 0;

                    dfs( grid , i , j , sum );

                        if( sum%k == 0 ){

                            count++;
                        }
                    
                }
            }
        }

        return count;
        
    }
};