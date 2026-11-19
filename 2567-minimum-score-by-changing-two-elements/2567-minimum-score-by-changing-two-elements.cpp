class Solution {
public:
    int minimizeSum(vector<int>& nums) {

        vector<int> temp = nums;

        int min1 = INT_MAX;
        int min2 = INT_MAX;

        int ind1 = 0;
        int ind2 = 0;


        for( int i = 0 ; i < nums.size() ; i++ ){

            if( nums[i] <= min1 ){

                min2 = min1;
                min1 = nums[i];

                ind2 = ind1;
                ind1 = i;
            }

            else if( nums[i] > min1 && nums[i] < min2 ){


                min2 = nums[i];
                ind2 = i;

            } 


        }

        int max1 = INT_MIN;
        int max2 = INT_MIN;

        int maxInd1 = 0;
        int maxInd2 = 0;

        for( int j = 0 ; j < nums.size() ; j++ ){

            if( nums[j] >= max1 ){

                max2 = max1;

                max1 = nums[j];

                maxInd2 = maxInd1;
                maxInd1 = j;

                
            }

            else if( nums[j] < max1 && nums[j] > max2 ){

                max2 = nums[j];

                maxInd2 = j;
            }


        }

        nums[ind1] = max1;
        nums[ind2] = max1;

        int min3 = INT_MAX;

        for( int m = 0 ; m < nums.size() ; m++ ){

            if( nums[m] <= min3 ){

                min3 = nums[m];

            }




        } 

        int diff1 = max1 - min3;


        temp[maxInd1] = min1;
        temp[maxInd2] = min1;

        int max3 = INT_MIN;

        for( int m = 0 ; m < nums.size() ; m++ ){

            if( temp[m] >= max3 ){

                max3 = temp[m];
            }



        }

        int diff2 = max3 - min1;

        int diff3 = max2 - min2;

        return min({ diff1 , diff2 , diff3 });



      

       

        


        
    }
};