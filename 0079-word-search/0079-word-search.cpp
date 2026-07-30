class Solution {
public:

    vector<int> dr = { -1 , 0 , 1 , 0 };
    vector<int> dc = { 0 , 1 , 0 , -1 };

    bool check( vector<vector<char>> &board , string word , int row , int col , int idx , vector<vector<bool>> &visit ){


        if( row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || visit[row][col] == true ){

            return false;

        }

        if( board[row][col] == word[idx] ){

            
        

            if( idx == word.size()-1 ){

                return true;
            }

            idx++;

        }

        else{

            return false;
        }

        visit[row][col] = true;

        for( int i = 0 ; i < 4 ; i++ ){

            int nextRow = row + dr[i];
            int nextCol = col + dc[i];

            if(check( board , word , nextRow , nextCol , idx , visit)){

                return true;

            }

        }

        visit[row][col] = false;

        return false;


    }


    bool exist(vector<vector<char>>& board, string word) {

        int row;
        int col;
        int idx = 0;

        vector<vector<bool>> visit( board.size() , vector<bool>( board[0].size() , false ));


        for( row = 0 ; row < board.size() ; row++ ){

            for( col = 0; col < board[0].size() ; col++ ){

                if( check( board , word , row , col , idx , visit )){

                    return true;
                }


            }
        }


        

        return false;
        
    }
};