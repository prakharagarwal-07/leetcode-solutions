class Solution {
public:
    int minInsertions(string s) {

        stack<int> para;

        int count = 0;


        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == '(' ){

                para.push(s[i]);

            }

            else{


                if( para.empty() ){

                    if( i == s.size()-1 || s[i+1] != ')' ){

                        count += 2;

                        continue;
                    }

                    count++;
                    i++;
                }

                else if( para.top() == '(' ){

                    if( i == s.size()-1 || s[i+1] != ')' ){

                        count++;

                        para.pop();

                        continue;
                    }

                    para.pop();

                    i++;
                }
            }
        }

        count += para.size()*2;

        return count;
        
    }
};