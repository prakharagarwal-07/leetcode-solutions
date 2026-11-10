class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {

        vector<vector<string>> ans;

        for( int i = 0 ; i < s1.size() ; i++ ){

            vector<string> curr;
            string curr1;
            string curr2;

            while( i < s1.size() && s1[i] != s2[i] ){

                curr1.push_back(s1[i]);
                curr2.push_back(s2[i]);
                i++;
            }

            if( curr1.size() != 0 ){

            curr.push_back(curr1);
            curr.push_back(curr2);

            ans.push_back(curr);

            }


        }

        return ans;
        
    }
};