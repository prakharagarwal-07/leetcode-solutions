class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {

        map<pair<int,int>,int> freq;

        int count = 0;

        for( int i = 0 ; i < nums.size()-1 ; i++ ){

            int a = nums[i];
            int b = nums[i+1];

            if( a > b ){

                swap( a , b );
            }

            freq[{ a , b }]++;

            if( a == b ){

                count++;
            }




        }

        int maxFreq = 0;

        for( auto &val : freq ){

            if( val.first.first == val.first.second ){

                continue;
            }

            if( val.second > maxFreq ){

                maxFreq = val.second;


            }


        }

        return count + maxFreq;
        
    }
};