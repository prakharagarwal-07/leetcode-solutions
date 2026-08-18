class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int size = nums.size();
        int high = INT_MIN;

        
        

        unordered_map<int,int> freq;
        

        for( int i = 0 ; i < size ; i++ ){

            freq[nums[i]]++;

        }

        if( k == 1 ){

            if( size == 1 ){return nums[0];}
            else if( size < 1 ){ return -1; }
            else if( freq[nums[0]] == size ){
                return -1;
            }

            
          


        }


        if( k == 1 ){

        for( auto val: freq ){

            if( val.second == 1 ){

                high = max( high , val.first );
            }
        }

        if( high == INT_MIN ){return -1;}

        else{

        return high;

        }

        }

         if(  k == size ){

            for( int k = 0 ; k < nums.size() ; k++ ){

                high = max(high , nums[k] );
            }

            return high;

        

        }

        if( nums[0] > nums[size-1] ){

            if( freq[nums[0]] == 1 ){ return nums[0]; }
            else if( freq[nums[size-1]] == 1 ){ return nums[size-1]; }

        }

        

        else if( nums[0] < nums[size-1] ){

            if( freq[nums[size-1]] == 1 ){ return nums[size-1]; }
            else if( freq[nums[0]] == 1 ){ return nums[0]; }


        }

       


        return -1;


        
    }
};