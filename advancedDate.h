#include "Date.h"

class advancedDate : public Date{
    private:

    static int easterNumber(int y){
        int g, c, x, z, d, e, n;

        g = y % 19 + 1;
        c = y / 100 + 1;
        x = 3 * c / 4 - x - 10;
        z = (8 * c + 5) / 25 - 5;
        d = 5 * y / 4 - x -10;
        e = (11 * g + 20 + z - x) % 30;

        if (((e == 25) && (g > 11)) || (e == 24))
        {
            e++;
            n = 44 - e;
            if ( n < 21)
            {
                n += 30; // n = n + 30
            }
            n = n + 7 - (d + n) % 7;
            return n;      
        }

        
        
    }
    public:
        
    static void easter(int year, int &day, int &month){
        int n = easterNumber(year);

        if (n > 31)
        {
            day = n - 31;
            month = 4;
        }
        else
        {
            day = n;
            month = 3;
        }
    }
};