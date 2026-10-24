class Solution {
public:
    int Days( string s ){

        vector<int> days = { 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };

        int month = (s[0] - '0')*10 + (s[1]-'0');



        int monthDays = (s[3]-'0')*10 + (s[4]-'0');

        int i = 0;

        while( i != month-1 ){

            monthDays += days[i];

            i++;
        }

        return monthDays;



    }
    int countDaysTogether(string a, string b, string c, string d ) {

        
        int aliceA = Days( a );
        int aliceL = Days( b );
        int bobA = Days( c );
        int bobL = Days( d );




       

       

        int maxi = max( aliceA , bobA );
        int mini = min( aliceL , bobL );

        if( maxi > mini ){

            return 0;

        }

        return mini - maxi + 1;

     



    }
};