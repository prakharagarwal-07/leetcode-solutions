class Solution {
public:

    void ip( string &s , string &curr , vector<string> &ans , int i , int size , int parts ){

        if( i >= size && parts == 4 ){

            ans.push_back(curr);
            return;
        }

        if( i >= size ){

            return;
        }

        if( parts == 4 ){

            return;
        }

       

        int number = 0;


        for( int j = i ; j < i+3 && j < s.size() ; j++ ){

             if( j > i && s[i] == '0' ){

                return;

            
            }

            number = number*10 + (s[j]-'0');


            if( number  > 255 ){

                return;

            }

            string segment = s.substr( i , j - i + 1 );

            curr += segment;

            if( parts < 3 ){

                curr.push_back('.');
            }

            ip( s , curr , ans , j+1 , size , parts+1 );

            if( parts < 3 ){

                curr.pop_back();
            }

            for( int k = 0 ; k < segment.size() ; k++ ){

                curr.pop_back();
            }



            



        }


    }

    vector<string> restoreIpAddresses(string s) {

        int i = 0;
        int size = s.size();
        string curr;
        vector<string> ans;
        int number = 0;
        int parts = 0;

        ip( s , curr , ans , i , size , parts );

        return ans;
        
    }
};