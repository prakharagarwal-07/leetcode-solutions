class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort( nums.begin() , nums.end() );

       
       

        
        int closestSum =  nums[0] + nums[1] + nums[2];
        int i;
        int start;

        for( i = 0 ; i < nums.size()-1 ; i++ ){

           

            start = i+1;

             int end = nums.size()-1;

            while( start < end ){

                int sum = nums[i] + nums[start] + nums[end];

                if( abs(target - sum) < abs(target - closestSum) ){

                    closestSum = sum;

                }

                if( sum > target ){

                    end--;;

                }

                else if( sum < target ){

                    start++;
                }

                

                else{

                    return target;
                }

                
                

               
                




            }


        }

        return closestSum;
        
    }
};