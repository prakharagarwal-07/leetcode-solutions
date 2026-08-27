class Solution {
public:
    int trap(vector<int>& height) {

        int size = height.size();

        vector<int> leftMax( size , 0 );

        leftMax[0] = height[0];

        for( int i = 1 ; i < size ; i++ ){

            leftMax[i] = max( leftMax[i-1] , height[i] );
        }

        vector<int> rightMax( size , 0 );

        rightMax[size-1] = height[size-1];

        for( int j = size - 2 ; j >= 0 ; j-- ){

            rightMax[j] = max( rightMax[j+1] , height[j] );
        }

        int water = 0;


        for( int k = 0 ; k < size ; k++ ){

            water = water + ( min( leftMax[k] , rightMax[k] ) - height[k] );




        }

        return water;
        
    }
};