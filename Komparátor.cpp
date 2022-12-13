#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int uloha;
int temp;
int a;
int b;
int hodnota1;
int hodnota2;
int hodnota3;

int hodnotaA;
int hodnotaB;

int hodnotaX;
int hodnotaY;

int hodnotaP;




int main() {
	cout << "Zadejte cislo pro ulohu\n";
	cin >> uloha;
	switch (uloha) {
	case 1:
		cout << "Zadejte hodnotu x \n";
		cin >> hodnota1;

		cout << "Zadejte hodnotu y \n";
		cin >> hodnota2;

		cout << "Zadejte hodnotu z \n";
		cin >> hodnota3;

		a = fmax(hodnota1, hodnota2);
		b = fmax(a, hodnota3);
		cout << "Nejvyssi cislo je " << b;
		break;

	case 2:
		cout << "zadejte hodnotu A";
		cin >> hodnotaA;

		cout << "Zadejte hodnotu B";
		cin >> hodnotaB;

		temp = hodnotaA;
		hodnotaA = hodnotaB;
		hodnotaB = temp;
		cout << "A= " << hodnotaA;
		cout << "\nB= " << hodnotaB;
		break;

	case 3:
		cout << "Zadejte hodnotu X \n";
		cin >> hodnotaX;
		cout << "Zadejte hodnotu Y \n";
		cin >> hodnotaY;

		cout << pow(hodnotaX, hodnotaY);
		break;

	case 4:
		cout << "Zadejte hodnotu P \n";
		cin >> hodnotaP;
		if (hodnotaP  )
			if (hodnotaP % 2 == 0) {
				cout << "cislo " << hodnotaP;
				cout << " je delitelne cislem 2";
			}
			else if (hodnotaP % 5 == 0) {
				cout << "cislo " << hodnotaP;
				cout << " je delitelne cislem 5";
			}
		break;

	}
}
