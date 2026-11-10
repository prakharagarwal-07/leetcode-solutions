class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {

        int i;

        if( nums.size() == 1 ){

            return 1;
        }

        for( i = 0 ; i < nums.size() ; i++ ){

            if( nums[i] == target[i] ){

                continue;
            }

            else{

                break;
            }
        }

        int count = 1;

        if( i == nums.size() ){

              for( int k = i-2 ; k >= 0 ; k-- ){

                if( target[k] >= target[k+1] ){

                    count++;
                }

                else{

                    break;
                }


            }

            return count;

            
        }

          sort( nums.begin()+i , nums.end() , greater<int>() );

        for( int m = i ; m < nums.size() ; m++ ){

            if( nums[m] != target[m] ){

                return 0;
            }
        }

          for( int x = i ; x < target.size()-1 ; x++ ){

            if( target[x] < target[x+1] ){

                return 0;
            }
        }

       

      
            for( int k = i-1 ; k >= 0 ; k-- ){

                if( target[k] >= target[k+1] ){

                    count++;
                }

                else{ 

                    break;
                }


            }

        
       

      

      

     

       
        return count ;

       
        
    }
};