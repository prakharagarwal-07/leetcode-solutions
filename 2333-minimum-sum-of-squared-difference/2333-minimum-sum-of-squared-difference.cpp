class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {

        int cap = k1+k2;

        vector<int> diff(100001 , 0);

        for( int i = 0 ; i < nums1.size() ; i++ ){

            diff[abs( nums1[i] - nums2[i] )]++;


        }

        for( int k = 100000 ; k >= 1 ; k-- ){

            if( diff[k] <= 0 ){

                continue;

            }

            int need = diff[k];

            if( need <= cap ){

                diff[k-1] += diff[k];
                
                cap -= diff[k];

                diff[k] = 0;

            }

            else{

                diff[k-1] += cap;

                
                diff[k] -= cap;

                cap = 0;
                
            }

            if( cap == 0 ){

                break;

            }

        }



        long long ans = 0;

        for( int j = 0 ; j < diff.size() ; j++ ){

            ans += 1LL*diff[j]*j*j;

        }
        
        return ans;

        

          
        
    }
};