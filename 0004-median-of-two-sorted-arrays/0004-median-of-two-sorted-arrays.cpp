class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<float> ans;

        int median = 0;

        int i = 0;
        int a = 0;


        while( i < nums1.size() && a < nums2.size() ){

            if( nums1[i] < nums2[a] ){

                ans.push_back(nums1[i]);
                i++;

            }

            else{

                ans.push_back(nums2[a]);
                a++;
            }
        }

       

        while( i < nums1.size() ){

            ans.push_back(nums1[i]);
            i++;


        }

        while( a < nums2.size() ){

            ans.push_back(nums2[a]);
            a++;
            
        }

        if( ans.size() % 2 != 0 ){

            return ans[ans.size()/2];

        }

        else{

            return (ans[ans.size()/2] + ans[ans.size()/2-1])/2 ;
        }

        

       
        
    }
};