class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int size = nums.size();
        vector<int> ans( size , 0 );

        for( int i = 0 ; i < size ; i++ ){

            nums.push_back(nums[i]);

        }

        stack<int> s;

        for( int j = 2*size-1 ; j >= 0 ; j-- ){

            while( !s.empty() && s.top() <= nums[j] ){

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

            s.push(nums[j]);


        }

        return ans;




        
    }
};