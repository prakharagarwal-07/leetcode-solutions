class Solution {
public:

    vector<int> dr = { -1 , 0 , 1 , 0 };
    vector<int> dc = { 0 , 1 , 0 , -1 };

    bool check( vector<vector<char>> &board , string &word , int row , int col , int idx  ){


        if( row < 0 || col < 0 || row >= board.size() || col >= board[0].size()  ){

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

        char temp = board[row][col];
        board[row][col] = '#';

        for( int i = 0 ; i < 4 ; i++ ){

            int nextRow = row + dr[i];
            int nextCol = col + dc[i];

            if(check( board , word , nextRow , nextCol , idx )){

                return true;

            }

        }

        board[row][col] = temp;

        return false;


    }


    bool exist(vector<vector<char>>& board, string word) {

        int row;
        int col;
        int idx = 0;



        for( row = 0 ; row < board.size() ; row++ ){

            for( col = 0; col < board[0].size() ; col++ ){

                if( check( board , word , row , col , idx )){

                    return true;
                }


            }
        }


        

        return false;
        
    }
};