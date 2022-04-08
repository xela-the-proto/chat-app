#include <iostream>
#include <cstdlib>
#include "message.h"

using namespace std;
int main(void){
    
    int d = 29,m = 1,y = 2015;
    int hh = 19, mm = 38, ss = 25;
    Date dataMessRic, dataMessInv;
    Time orarioMessRic, orarioMessInv;
    char testo[1024], testoMessRic[1024], testoMessInv[1024];
    dataMessRic.setDate(d, m, y);
    orarioMessRic.setora(hh);
    orarioMessRic.setminuti(mm);
    orarioMessRic.setsecondi(ss);
    strcpy(testo,"ciao mondo!");
    Message messaggioRicevuto;
    messaggioRicevuto.setDate(dataMessRic);
    messaggioRicevuto.setTime(orarioMessRic);
    messaggioRicevuto.setText(testo);

    cout << "Messaggio in arrivo:\n";
    cout << "Numero:" << messaggioRicevuto.getCounter() << endl;
    
}