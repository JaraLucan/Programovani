#include <iostream>
using namespace std;

int etapa;

int kategorie;
int KATEGORIE;

int zbozi;
int rohliky;
int rohlik = 2;
int cenaRohliky;
int housky;
int houska = 3;
int cenaHousky;

int zbozi2;
int dobreSendvice;
int dobrySendvic = 60;
int cenaDobreSendvice;
int horsiSendvice;
int horsiSendvic = 55;
int cenaHorsiSendvice;

int cenaCelkem;

int main() {
    cout << "Zadejte cislo etapy\n";
    cin >> etapa;
    switch (etapa) {
        //Rozdělení na etapy
    case 1: {
    KATEGORIE:
        cout << "Zadejte cislo kategorie\nKategorie 1 - pecivo\nKategorie 2 - sendvice\nZobrazeni uctenky - 3\n";
        cin >> kategorie;
        switch (kategorie) {
            //Rozdělení mezu pečivem a funkční elektronikou do školy
        case 1: {
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
            cout << "Jake zbozi chcete koupit\nJedna pro dobry sendvic\nDva pro horsi sendvic\n";
            cin >> zbozi2;
            switch (zbozi2) {
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
                goto KATEGORIE;
            }
            }
        }
        case 3: {
            // Výpočet celkové ceny nákupu
            cenaCelkem = cenaRohliky + cenaHousky + cenaDobreSendvice + cenaHorsiSendvice;
            cout << "Dekujeme za vas nakup, celkova cena je " << cenaCelkem << "kc\n";
            // Zobrazení položek nákupu
            cout << "Koupili jste u nas\nRohliky " << rohliky << "x\nHousky " << housky << "x\nDobre sedvice " << dobreSendvice << "x\nHorsi sendvice" << horsiSendvice << "x\n";
            cout << "Doufame, ze prijdete znovu\n";
        }
        }
        break;

    }
    }
}