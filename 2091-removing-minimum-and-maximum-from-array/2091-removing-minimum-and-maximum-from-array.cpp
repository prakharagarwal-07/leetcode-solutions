class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int size = nums.size();

        if( size == 1 ){

            return 1;
        }

        int largest = INT_MIN;
        int smallest = INT_MAX;
        int maxIndex = 0;
        int minIndex = 0;

        for( int i = 0 ; i < nums.size() ; i++ ){

            if( nums[i] < smallest ){

                smallest = nums[i];
                minIndex = i;

            }

            if( nums[i] > largest ){

                largest = nums[i];
                maxIndex = i;
            }

        }

        int x = max( maxIndex , minIndex ) + 1;
        int y = size - min( maxIndex , minIndex );
        int z = (size - max( maxIndex , minIndex )) + (min( maxIndex , minIndex ) + 1);
        
        return min( min( x , y ) , min( x , z ) );
        
    }
};