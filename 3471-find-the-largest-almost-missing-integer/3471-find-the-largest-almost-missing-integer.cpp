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

            for( auto val: freq ){

            if( val.second == 1 ){

                high = max( high , val.first );
            }
        }

            if( high == INT_MIN ){
                return -1;
            }

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

 

            if( freq[nums[0]] == 1 ){ 

                high = max( high , nums[0] );
                

            }

            if( freq[nums[size-1]] == 1 ){ 

                high = max( high , nums[size-1] );

            }

        

        


        if( high == INT_MIN ){

            return -1;
        }

        else{
        return high;
        }


        
    }
};