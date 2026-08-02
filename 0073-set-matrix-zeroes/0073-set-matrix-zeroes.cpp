class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = 0;
        int col = 0;
       
        

        vector<bool> ansRow(matrix.size() , false);
        vector<bool> ansCol(matrix[0].size() , false);

        while( row < matrix.size() ){

            if( matrix[row][col] == 0 ){

                ansRow[row] = true;
                ansCol[col] = true;

                

            }

            col++;


            if( col == matrix[0].size() ){

                col = 0;
                row++;
            }



        }

        for( int i = 0 ; i < matrix.size() ; i++ ){

            for( int j = 0 ; j < matrix[0].size() ; j++ ){

                if( ansRow[i] || ansCol[j] ){

                    matrix[i][j] = 0;
                }
            }
        }

        
    }
};