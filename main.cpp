#include <iostream>
#include <cstdlib>
#include "Date.h"
#include "advancedDate.h"
using namespace std;
int main(int, char**) {
    
    int d,m,y;
    /*
    cout << "calcolo del nuemro di giorni tra due date \n";
    cout << "inserire la prima data \n";
    cout << "giorno:";
    cin >> d;
    cout << "mese:";
    cin >> m;
    cout << "anno:";
    cin >> y;

    Date data1;
    data1.setDate(d,m,y);

    cout << "inserire la seconda data \n";
    cout << "giorno:";
    cin >> d;
    cout << "mese:";
    cin >> m;
    cout << "anno:";
    cin >> y;

    Date data2;
    data2.setDate(d,m,y);

    int giorni = data1.diff(data2);

    cout << "dal " << data1.getDay() << "/" << data1.getMonth() << "/" << data1.getYear() << "\n";
    cout << "al " << data2.getDay() << "/" << data2.getMonth() << "/" << data2.getYear() << "\n";
    cout << "intercorrono " << giorni << " giorni";
    system("pause");  
    */
    cout << "DETERMINAZIONE DELLA PASQUA \n";
    cout << "specifica l'anno: ";
    cin >> y;

    advancedDate::easter(y,d,m);

    cout << "nell'anno " << y << " la pasqua cade nel giorno " << d << "/" << m << endl;

    return 0;
}
