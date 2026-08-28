class Solution {
public:
    int trap(vector<int>& height) {

        int size = height.size();

        int left = 0;
        int right = size-1;

        int lMax = 0;
        int rMax = 0;

        int water = 0;

        while( left <= right ){

            lMax = max( height[left] , lMax );
            rMax = max( height[right] , rMax );

            if( lMax < rMax ){

                water += lMax - height[left];
                left++;
            }
            else{

                water += rMax - height[right];
                right--;
            }

            
 
           

        }

        return water;
        
    }
};