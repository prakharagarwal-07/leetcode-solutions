class Solution {
public:

        vector<int> dr = { -2 , -2 , -1 , 1 , 2 , 2 , 1 , -1 };
        vector<int> dc = { -1 , 1  ,  2 , 2 , 1 ,-1 ,-2 , -2 };


    bool move( vector<vector<int>> &grid , int row , int col , int n , int number ){


        if( row < 0 || col < 0 || row >= n || col >= n ){

            return false;

        }

        if( grid[row][col] != number ){

            return false;

        }

        else{

            if( number == n*n-1 ){

            return true;
        }


            number++;
        }

        
        


        for( int i = 0 ; i < 8 ; i++ ){

            int nextRow = row + dr[i];
            int nextCol = col + dc[i];
            
            if(move( grid , nextRow , nextCol , n , number )){

                return true;
            }


        }

        return false;

    }


    bool checkValidGrid(vector<vector<int>>& grid) {

        int row = 0;
        int col = 0;
        int n = grid.size();
        int number = 0;

        if( move( grid , row , col , n , number )){

            return true;

        }

        return false;

       
       


        
    }
};