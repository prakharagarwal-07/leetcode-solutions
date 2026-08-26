class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int size = heights.size();

        vector<int> ans( size , size );

        stack<int> nextSmall;

        for( int i = size - 1 ; i >= 0 ; i-- ){

            while( !nextSmall.empty() && heights[nextSmall.top()] >= heights[i] ){

                nextSmall.pop();
            }

            if( !nextSmall.empty() && heights[nextSmall.top()] < heights[i] ){

                ans[i] = nextSmall.top();
            }

            nextSmall.push(i);


        }

        stack<int> prevSmall;

        int maxArea = INT_MIN;
        int currArea = 0;



        for( int j = 0 ; j < size ; j++ ){

            int prev = -1;

            

            while( !prevSmall.empty() && heights[prevSmall.top()] >= heights[j] ){

                prevSmall.pop();

            }

            if( !prevSmall.empty() && heights[prevSmall.top()] < heights[j] ){

                prev = prevSmall.top();


            }

            prevSmall.push(j);

          

            currArea = heights[j]*( ans[j] - prev - 1 );

            maxArea = max( maxArea , currArea );




        }

        return maxArea;
        
    }
};