class Solution {
public:
    int sumDecoded(vector<long long>& nums) {

        long long int answer = 0;

   

        for( int i = 0 ; i < nums.size() ; i++ ){

        long long int x = 0;
        long long int y = 0;

          
            int width = nums[i] % 10;
            long long int d = floor( nums[i] / 10 );
            

            string curr = to_string(d);

           
            string x1 = curr.substr( 0 , width );
            string y1 = curr.substr( width , curr.size()-width );

          

            for( int j = 0 ; j < x1.size() ; j++ ){

                int a = x1[j] - '0';

                x = x*10 + a;
                

            }

            
            for( int j = 0 ; j < y1.size() ; j++ ){

                int a = y1[j] - '0';

                y = y*10 + a;
                

            }

            long long ans = 1;


        while( y > 0 ){

            if( y % 2 == 1 ){

                ans = 1LL*ans*x%(1000000007);

            }

            x = 1LL*x*x%(1000000007);

            y = y/2;
        }

        answer += ans;


        }

        return answer%(1000000007);

        
        
        
    }
};