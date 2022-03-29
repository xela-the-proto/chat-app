#include <iostream>
#include <cstdlib>
#include "Date.h"
#include "advancedDate.h"
using namespace std;
int main(int, char**) {
    
    int d,m,y;
    
    cout << "DETERMINAZIONE DELLA PASQUA \n";
    cout << "specifica l'anno: ";
    cin >> y;

    advancedDate::easter(y,d,m);

    cout << "nell'anno " << y << " la pasqua cade nel giorno " << d << "/" << m << endl;

    return 0;
}
