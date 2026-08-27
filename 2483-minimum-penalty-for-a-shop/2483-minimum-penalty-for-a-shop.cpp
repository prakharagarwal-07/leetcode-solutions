class Solution {
public:
    int bestClosingTime(string customers) {

        int size = customers.size();

        int minHr = 0;

        int minPen = INT_MAX;

        vector<int> numberY( size , 0 );

        if( customers[0] == 'Y' ){

            numberY[0] = 1;
        }

        for( int i = 1 ; i < size ; i++ ){

            if( customers[i] == 'Y' ){

                numberY[i] = numberY[i-1]+1;

            }

            else{

                numberY[i] = numberY[i-1];
            }
        }

        int currPen = numberY[size-1];
        



        for( int j = 0 ; j < size ; j++ ){

            currPen = ((j+1) - numberY[j]) + ( numberY[size-1] - numberY[j] );

            if( currPen < minPen ){

                minPen = currPen;
                minHr = j+1;
            }

         

        }

            if( numberY[size-1] <= minPen ){

              
                minHr = 0;
            }

          

        return minHr;
        

       
       
       


        
    }
};