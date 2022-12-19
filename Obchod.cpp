#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int jedna;

int kategorie;
int KATEGORIE;
int ZBOZI1;
int ZBOZI2;
int ZBOZI3;
int VYPOCET;
int kodSleva = "AA";
int kod;
int slevovyKod;
int sance = 2;
int random;
int pinKarta = 1234;
int PLATBA;
int CISLA;
string selva = "0,8";

int zbozi;
int rohliky;
int rohlik = 2;
int cenaRohliky;
int housky;
int houska = 3;
int cenaHousky;

int zbozi2;
int bageta = 14;
int bagety;
int donut = 11;
int donuty;
int cenaBagety;
int cenaDonuty;

int zbozi3;
int dobreSendvice;
int dobrySendvic = 60;
int cenaDobreSendvice;
int horsiSendvice;
int horsiSendvic = 55;
int cenaHorsiSendvice;
int cenaSendvice;
int cenaSendviceSleva;
int cenaCelkemSleva;

int cenaCelkem;

int platba;
int kartaPin;
int FIK;
int PKN;
int pokladna;
int jmeno;
int Pepa = 1;
int Veronika = 2;
int Hammond = 3;


int main() {
    cout << "Musite vejit do obchodu, zmacknete jedna\n";
    cin >> jedna;
    if (jedna == 1) {
    KATEGORIE:
        cout << "Zadejte cislo kategorie\nKategorie 1 - pecivo\nKategorie 2 - sladke pecivo\nKategorie 3 - sendvice\nZobrazeni uctenky - 4\n";
        cin >> kategorie;
        switch (kategorie) {
            //Rozdělení mezi pečivem, sendciči
        case 1: {
        ZBOZI1:
            cout << "Jake zbozi chcete koupit\nJedna pro rohliky\nDva pro housky\n";
            cin >> zbozi;
            switch (zbozi) {
                //Rozdělení na rohlíky a housky
            case 1: {
                cout << "Kolik rohliku chete koupit\nCena za jeden rohlik je 2kc\n";
                cin >> rohliky;
                cenaRohliky = rohlik * rohliky;
                cout << "Rohliky vas budou stat " << cenaRohliky << "kc\n";
                goto KATEGORIE;
            }
            case 2: {
                cout << "Kolik housek chete koupit\nCena za jednu housku je 3kc\n";
                cin >> housky;
                cenaHousky = houska * housky;
                cout << "Housky vas budou stat " << cenaHousky << "kc\n";
            }
            }
        }
              goto KATEGORIE;

        case 2: {
        ZBOZI2:
            cout << "Jake zbozi chcete koupit\nJedna pro bagety\nDva pro donuty\n";
            cin >> zbozi2;
            switch (zbozi2) {
            case 1: {
                //Rozdělení na bagety a chleba
                cout << "Kolik baget chcete koupit\nJedna bageta stoji 14 kc\n";
                cin >> bagety;
                cenaBagety = bageta * bagety;
                cout << "Bagety vas celkem budou stat " << cenaBagety << "kc\n";
                goto KATEGORIE;
            }
            case 2: {
                cout << "Kolik donutu chcete koupit\nCena za jeden donut je 11kc\n";
                cin >> donuty;
                cenaDonuty = donut * donuty;
                cout << "Donuty vas budou stat " << cenaDonuty << "kc\n";
                goto KATEGORIE;
            }
            }


        case 3: {
            ZBOZI3;
            cout << "Jake zbozi chcete koupit\nJedna pro dobry sendvic\nDva pro horsi sendvic\n";
            cin >> zbozi3;
            switch (zbozi3) {
                //Rozdělení na dobré a horší sendviče
            case 1: {
                cout << "Kolik dobrych sendvicu chcete koupit\nJeden dobry sendvic stoji 60kc \n";
                cin >> dobreSendvice;
                cenaDobreSendvice = dobreSendvice * dobrySendvic;
                cout << "Dobre sendvice vas budou stat " << cenaDobreSendvice << "kc\n";
                goto KATEGORIE;
            }
            case 2: {
                cout << "Kolik horsich sendvicu chcete koupit\nJeden horsi sendvic stoji 55kc \n";
                cin >> horsiSendvice;
                cenaHorsiSendvice = horsiSendvice * horsiSendvic;
                cout << "Horsi sendvice vas budou stat " << cenaHorsiSendvice << "kc\n";
                cenaSendvice = cenaDobreSendvice + cenaHorsiSendvice;
                goto KATEGORIE;
            }

            }
        }
        }
        case 4: {
            //randomizace na nakup zdarma
            random = rand() % 1000 + 1;
            if (random == sance) {
                cout << "Tento nakup mate zadarmo, gratulujeme\n";
                goto KATEGORIE;
            }
            //slevovy kod 
            cout << "Mate slevovy kod? Zmacknete 1\n";
            cin >> kod;
            if (kod == 1) {
                cout << "Zadejte slevovy kod\n";
                cin >> slevovyKod;
                if (slevovyKod = kodSleva) {
                    //sleva 15%
                    cenaSendviceSleva = cenaSendvice * 0, 85;
                    cenaCelkemSleva = cenaRohliky + cenaHousky + cenaBagety + cenaDonuty + cenaSendviceSleva;
                    cout << "Spravny kod, mate slevu 15% na  kategorii 3\n";
                    if (cenaCelkemSleva > 10000) {
                        cout << "Gratulujeme, vahral jste lednici, pro prevzani se spojte s manazerem\n";
                    }
                    cout << "Dekujeme za vas nakup, celkova cena je " << cenaCelkemSleva << "kc\n";
                    // Zobrazení položek nákupu
                    cout << "Koupili jste u nas\nRohliky " << rohliky << "x\nHousky " << housky << "x\nBagety " << bagety << "x\nDonuty " << donuty << "x\nDobre sedvice " << dobreSendvice << "x\nHorsi sendvice " << horsiSendvice << "x\n";
                }
                else {
                    cout << "Spatny slevovy kod\n";
                    goto VYPOCET;
                }
            }

            else {
                srand(time(0));
                //randomizace na nakup zdarma
                random = rand() % 1000 + 1;
                if (random == sance) {
                    cout << "Tento nakup mate zadarmo, gratulujeme\n";
                    goto KATEGORIE;
                }
                // Výpočet celkové ceny nákupu
            VYPOCET:
                cenaCelkem = cenaRohliky + cenaHousky + cenaBagety + cenaDonuty + cenaDobreSendvice + cenaHorsiSendvice;
                if (cenaCelkem > 10000) {
                    cout << "Gratulujeme, vahral jste lednici, pro prevzani se spojte s manazerem\n";
                }
                cout << "Dekujeme za vas nakup, celkova cena je " << cenaCelkem << "kc\n";
                // Zobrazení položek nákupu
                cout << "Koupili jste u nas\nRohliky " << rohliky << "x\nHousky " << housky << "x\nBagety " << bagety << "x\nDonuty" << donuty << "x\nDobre sedvice " << dobreSendvice << "x\nHorsi sendvice " << horsiSendvice << "x\n";
            }
        }
          CISLA:
              FIK = rand() % 9999 + 1000;
              PKN = rand() % 999999 + 100000;
              cout << "FIK kod je " << FIK << "\n";
              cout << "PKN kod je " << PKN << "\n";




          PLATBA:
              pokladna = rand() % 10 + 1;
              cout << "Jdete na volnou pokladnu cislo " << pokladna << "\n";
              jmeno = rand() % 3 + 1;
              cout << "Dobry den, jmenuji se ";
              if (jmeno == 1) {
                  cout << "Pepa\n";
              }
              else if (jmeno == 2) {
                  cout << "Veronika\n";
              }
              else if (jmeno == 3) {
                  cout << "Hammond\n";
              }

              cout << "Jakym zpusobem chcete zaplatit?\nJedna pro hotovost\nDva pro zaplaceni kartou\n";
              cin >> platba;
              if (platba == 1) {
                  cout << "Dekujeme za vas nakup\n";
              }
              else if (platba == 2) {
                  cout << "Zadejte pin od karty\n";
                  cin >> kartaPin;
                  if (kartaPin == pinKarta) {
                      cout << "Dekujeme za platbu\n";
                  }
                  else {
                      cout << "Spatny pin od karty\n";
                      goto PLATBA;
                  }
              }
              else {
                  goto PLATBA;
              }
        }
    }
    else {
        cout << "Gratulujeme, nevesel jste do obchodu";
    }
}