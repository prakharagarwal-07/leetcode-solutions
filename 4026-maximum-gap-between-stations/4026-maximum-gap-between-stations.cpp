class Solution {
public:
    int maximumGap(string skill, string station) {
        if( skill.size() == station.size() ){

            if( skill.size() == 1 ){


                return 0;

            }

            return 1;
        }

        if( skill.size() == 1 ){
            return 0;
        }

        

        vector<int> left;
        int i = 0;
        int j = 0;

        while( j < skill.size() ){

            if( skill[j] == station[i] ){

                left.push_back(i);
                i++;
                j++;

            }

            else{

                i++;
            }

        }

        int m = skill.size()-1;
        int n = station.size()-1;
        vector<int> right;

        while( m >= 0 ){

            if( skill[m] == station[n] ){

                right.push_back(n);
                n--;
                m--;


            }

            else{

                n--;
            }

        }

        int k = 0;
        int size = left.size();
        int diff = INT_MIN;

        while( k < left.size()-1 ){

            diff = max( diff , abs(left[k] - right[size-2-k]) );
            k++;

        }

        return diff;
        
    }
};