class Solution {
public:
    string digitSum(string s, int k) {

        string ans;

        while( s.size() > k  ){

            ans = "";

            int i = 0;

            while( i < s.size() ){

                int j = 0;
                int currSum = 0;

            for(  j = 0 ; j < k ; j++ ){

                if( i >= s.size() ){

                    break;
                }

               

                currSum += s[i] - '0';

               

                i++;
            }

            ans += to_string(currSum);

           


            }

            s = ans;
        }

        return s;
        
    }
};