class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = 0;
        int col = 0;

        bool firstRow = false;
        bool firstCol = false;

        while( row < matrix.size() ){

            if( matrix[row][col] == 0 ){

                if( row == 0 ){

                    firstRow = true;
                }

                if( col == 0 ){

                    firstCol = true;
                }

                matrix[row][0] = 0;
                matrix[0][col] = 0;

                

            }

            col++;


            if( col == matrix[0].size() ){

                col = 0;
                row++;
            }



        }

        for( int i = 1 ; i < matrix.size() ; i++ ){

            for( int j = 1 ; j < matrix[0].size() ; j++ ){

                if( matrix[i][0] == 0 || matrix[0][j] == 0 ){

                    matrix[i][j] = 0;
                }
            }
        }

        if( firstRow ){
            for( int i = 0 ; i < matrix[0].size() ; i++ ){

                matrix[0][i] = 0;
            }
        }

        if( firstCol ){

            for( int i = 0 ; i < matrix.size() ; i++ ){

                matrix[i][0] = 0;
            }


        }

        
    }
};