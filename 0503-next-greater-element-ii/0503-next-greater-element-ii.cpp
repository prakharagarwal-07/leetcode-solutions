class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int size = nums.size();
        vector<int> ans( size , 0 );

       

        stack<int> s;

        for( int j = 2*size-1 ; j >= 0 ; j-- ){

            int curr = nums[j % size];          //important step

            while( !s.empty() && s.top() <= curr ){

                s.pop();

            }

            if( j < size ){

                if( s.empty() ){

                    ans[j] = -1;

                }
                else{

                ans[j] = s.top();

                }

            }

            s.push(curr);


        }

        return ans;




        
    }
};