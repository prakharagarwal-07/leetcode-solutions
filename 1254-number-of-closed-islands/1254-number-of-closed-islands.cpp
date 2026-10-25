class Solution {
public:

    void search( vector<vector<int>>& grid , int row , int col , bool& isSafe ){

       

        if( row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() ){

            isSafe = false;

            return ;


        }


        if( grid[row][col] == 1 ){

            return ;
        }

        grid[row][col] = 1;

        search( grid , row-1 , col , isSafe);
        
        search( grid , row , col+1  , isSafe );

        search( grid , row+1 , col , isSafe );

        search( grid , row , col-1 , isSafe );


        

       



       
        

       


    }


    int closedIsland(vector<vector<int>>& grid) {

        int count = 0;
        

        for( int i = 0 ; i < grid.size() ; i++ ){

            for( int j = 0 ; j < grid[0].size() ; j++ ){
                 bool isSafe = true;

                if( grid[i][j] == 0 ){

                    search( grid , i , j , isSafe);

                    if( isSafe ){

                        count++;

                    }
                   
                }
            }
        }

        return count;





        
        
    }
};