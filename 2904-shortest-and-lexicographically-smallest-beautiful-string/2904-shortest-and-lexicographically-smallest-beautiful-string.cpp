class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int left = 0;
        int right = 0;
        int count = 0;
        int len = INT_MAX;
        string ans = "";

        while( right < s.size() ){

            if( s[right] == '1' ){

                count++;
            }

      

                while( count > k ){

                    if( s[left] == '1' ){

                        count--;
                   
                    }

                    left++;
                
                }

                if( count == k ){

                    

                while( s[left] == '0' ){

                    left++;
                }

                string curr = s.substr( left , right - left + 1 );

                if( right-left+1 == k ){

                    return curr;
                }

                if( ans.size() == 0 || right - left + 1 < ans.size() ){

                    ans = curr;
                }

                else if ( right - left + 1 == ans.size() ){

                    if( curr < ans ){

                        ans = curr;
                    }
                    
                }

               



            }

             right++;

        }








            return ans;

            


        

        
        
    }
};