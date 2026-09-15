class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort( tokens.begin() , tokens.end() );

        int start = 0;
        int end = tokens.size()-1;
        int score = 0;


        while( start <= end ){

            if( tokens[start] <= power ){

                power -= tokens[start];
                score++;
                start++;
            }

            else{

                if( score > 0 && start != end ){

                    power += tokens[end];
                    score--;
                    end--;

                }

                else{

                    break;
                }

                

            }


        }

        return score;
        
    }
};