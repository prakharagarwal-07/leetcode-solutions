class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = 0;
        int col = 0;
       
        

        vector<int> ansRow;
        vector<int> ansCol;

        while( row < matrix.size() ){

            if( matrix[row][col] == 0 ){

                ansRow.push_back(row);
                ansCol.push_back(col);

                

            }

            col++;


            if( col == matrix[0].size() ){

                col = 0;
                row++;
            }



        }

        for( int a = 0 ; a < ansRow.size() ; a++ ){

            for( int i = 0 ; i < matrix[0].size() ; i++ ){

                matrix[ansRow[a]][i] = 0;
            }
        }

        for( int b = 0 ; b < ansRow.size() ; b++ ){

            for( int i = 0 ; i < matrix.size() ; i++ ){

                matrix[i][ansCol[b]] = 0;
            }
        }
        
    }
};