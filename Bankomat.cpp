#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
#include <functional>
#include <algorithm>


using namespace std;

int spravneheslo1 = 1234;
int spravneheslo2 = 2222;
int spravneheslo3 = 3333;
int penize1 = 500;
int penize2 = 1000;
int penize3 = 1500;
int PRIHLASENI;

int moznost1;
int vyber1;
int uzivatel;
int heslo1;
int funkce1;
int potvrzeni1;
int poslani1;
int poslaniucet1;

int heslo2;
int funkce2;
int potvrzeni2;
int vyber2;
int poslani2;
int zustatek2;

int heslo3;
int potvrzeni3;
int vyber3;
int poslani3;
int funkce3;
int zustatek3;

int zobrazitZustatek1;
int zobrazitZustatek2;
int zobrazitZustatek3;





int main() {
	PRIHLASENI:
	cout << "Prihlaste se \n";
	cout << "Zadejte cislo uzivatele\n";
	cin >> uzivatel;

	switch (uzivatel) {
	case 1: {
		cout << "Zadejte heslo\n";
		cin >> heslo1;
		if (heslo1 != spravneheslo1) {
			cout << "Spatne heslo\n";
		}
		else {
			cout << "Zvolte funkci\n1 pro vybrani penez\n2 pro posalni penez\n3 pro odhlaseni\n";
			cin >> funkce1;
		}
		switch (funkce1) {
			cout << "Mate 500 kc\nCo s nimi chcete udelat?\n";
		case 1: {
			cout << "Kolik penez chete vybrat?\n";
			cin >> vyber1;
			cout << "Pro vybrani potvrdte heslo\n";
			cin >> potvrzeni1;
			if (potvrzeni1 != spravneheslo1) {
				cout << "Spatne heslo\n";
			}
			else {
				cout << "Vybrali jste " << vyber1 << " penez\n";
				zobrazitZustatek1 = penize1 - vyber1;
				cout << "Vas aktualni zustatek je " << zobrazitZustatek1 << "\n";
				cout << "Nyní jste odhlasen\n";
				 goto PRIHLASENI;
			}
		}
			  break;
		case 2: {
			cout << "Kolik penez chete poslat?\n";
			cin >> poslani1;
			cout << "Na jaky ucet chete penize poslat?\n";
			cin >> poslaniucet1;
			cout << "Pro poslani penez overte heslem\n";
			cin >> potvrzeni1;
			if (potvrzeni1 != spravneheslo1) {
				cout << "Zadali jste spatne heslo\n";
			}
			else {
				cout << "Poslali jste " << poslani1 << " penez\n";
				zobrazitZustatek1 = penize1 - poslani1;
				cout << "Vas aktualni zustatek je  " << zobrazitZustatek1;
				cout << "\nNyní jste odhlasen\n";
				goto PRIHLASENI;
			}
			break;
		}
		case 3: {
			cout << "Nyní jste odhlasen\n";
			goto PRIHLASENI;
		}
		}
	}
	case 2: {
		cout << "Zadejte heslo\n";
		cin >> heslo2;
		if (heslo2 != spravneheslo2) {
			cout << "Spatne heslo\n";
		}
		else {
			cout << "Zvolte funkci\n1 pro vybrani penez\n2 pro posalni penez\n3 pro odhlaseni\n";
			cin >> funkce2;
		}
		switch (funkce2) {
			cout << "Mate 1000 kc\nCo s nimi chcete udelat?\n";
		case 1: {
			cin >> vyber2;
			cout << "Pro vybrani penez potvrdte heslo\n";
			cin >> potvrzeni2;
			if (potvrzeni2 != spravneheslo2) {
				cout << "Spatne heslo\n";
			}
			else {
				cout << "Vybrali jste " << vyber2 << " penez\n";
				zobrazitZustatek2 = penize2 - vyber2;
				cout << "Vas akualni zustatek je " << zobrazitZustatek2 <<"\n";
				cout << "Nyní jste odhlasen\n";
				goto PRIHLASENI;
			}
		}
			  break;
		case 2: {
			cout << "Kolik penez chete poslat?\n";
			cin >> poslani2;
			cout << "Na jaky ucet chcete penize poslat?\n";
			cin >> poslaniucet1;
			cout << "Pro poslani penez potrvdte heslo\n";
			cin >> potvrzeni2;
			if (potvrzeni2 != spravneheslo2) {
				cout << "Spatne heslo\n";
			}
			else {
				cout << "Poslali jste " << poslani2 << "penez\n";
				zobrazitZustatek2 = penize2 - poslani2;
				cout << "Vas aktualni zustatek je " << zustatek2;
				cout << "Nyní jste odhlasen\n";
				goto PRIHLASENI;
			}
			break;
		}
		case 3: {
			cout << "Nyní jste odhlasen\n";
			goto PRIHLASENI;
		}
		}
	}
	case 3: {
		cout << "Zadejte heslo\n";
		cin >> heslo3;
		if (heslo3 != spravneheslo3) {
			cout << "Spatne heslo\n";
		}
		else {
			cout << "Zvolte funkci\n1 pro vybrani penez\n2 pro poslani penez\n3 pro odhlaseni\n";
			cin >> funkce3;
			switch (funkce3) {
				cout << "Mate 1500 kc\nCo s nimi chcete udelat?\n";
			case 1: {
				cout << "Kolik penez chete vybret?\n";
				cin >> vyber3;
				cout << "Pro vybrani zadejte heslo\n";
				cin >> potvrzeni3;
				if (potvrzeni3 != spravneheslo3) {
					cout << "Spatne heslo\n";
				}
				else {
					cout << "Vybrali jste " << vyber3 << " penez\n";
					zobrazitZustatek3 = penize3 - vyber3;
					cout << "Vas zustatek je " << zobrazitZustatek3 << "\n";
					cout << "Nyní jste odhlasen\n";
					goto PRIHLASENI;
				}
			}
			case 2: {
				cout << "Kolik penez chcete poslat ? \n";
				cin >> poslani3;
				cout << "Na jaky ucet chcete penize poslat?\n";
				cin >> poslaniucet1;
				zobrazitZustatek3 = penize3 - poslani3;
				cout << "Vas aktualni zustatek je " << zustatek3;
				cout << "Nyní jste odhlasen\n";
					goto PRIHLASENI;
			}
			case 3: {
				cout << "Nyní jste odhlasen\n";
				goto PRIHLASENI;
			}
			}
		}
	}
	}
}

