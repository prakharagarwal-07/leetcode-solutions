class Solution {
public:

    long long int number( string segment ){

        long long number = 0;

        for( char val: segment ){

            number = 1LL*number*10 + (val-'0');
        }

        return number;
    }

    vector<char> op = { '+' , '-' , '*' };

    void combo( string &num , string curr , vector<string> &ans , int target , long long int sum , long long int lastOp , int i ){

        if( i >= num.size() && target == sum ){

            ans.push_back(curr);
            return;
        }

        if( i >= num.size() ){

            return;
        }



        for( int j = i ; j < num.size() ; j++ ){

            string segment = num.substr( i , j-i+1 );

            long long int value = number(segment);

            if( j > i && num[i] == '0' ){

                    break;
                }


            if( i == 0 ){

                    combo( num , curr+segment , ans , target , sum+value , value , j+1 );
                    continue;

                }

                combo( num , curr + '+' + segment , ans , target , sum+value , value , j+1 );
                combo( num , curr + '-' + segment , ans , target , sum-value , -value , j+1 );
                combo( num , curr + '*' + segment , ans , target , sum - lastOp + lastOp*value , lastOp*value ,  j+1 );
        }
    }
    vector<string> addOperators(string num, int target) {

        string curr;
        vector<string> ans; 
        long long int sum = 0;
        int i = 0;
        long long lastOp = 0;

    combo( num ,  curr , ans , target , sum , lastOp , i );

    return ans;

        
    }
};