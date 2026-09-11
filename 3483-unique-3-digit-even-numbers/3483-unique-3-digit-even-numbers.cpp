class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        set<int> s;

    



        for( int i = 0 ; i < digits.size() ; i++ ){     //hunderd

            if( digits[i] == 0 ){

                continue;
            }

            for( int j = 0 ; j < digits.size() ; j++ ){     //tens

                if( j == i ){

                    continue;
                }

            for( int k = 0 ; k < digits.size() ; k++ ){   //ones

                    int curr = 0;

                    if( k == j || k == i ){

                        continue;

                    }



                    if( digits[k] % 2 == 0 ){

                        curr = digits[i]*100 + digits[j]*10 + digits[k];

                        s.insert(curr);

                    }

                    

                   

                    




                }
            }
        }

        return s.size();
        
    }
};