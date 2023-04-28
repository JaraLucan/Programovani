#include <iostream>
#include <time.h>
// na random
#include<windows.h>
// na sleep
using namespace std;

int jmeno;
int vyber;
int potvrzeni;

int zivoty = 100;
int stit = 50;
int utok;
int penize = 10;
int nakup;
int monstra;

int monstrumZivoty = 30;
int monstrumUtok = 8;
int pozkozeni = monstrumUtok;
int monstraUtok;
int monstraZivoty = monstrumZivoty * monstra;

int miniBossUtok = 14;
int miniBossZivoty = 150;

int rozhodnuti;

int min1 = 22;
int max1 = 27;
int rozdil1 = 15;
int min2 = 28;
int max2 = 39;
int rozdil2 = 11;
int min3 = 21;
int max3 = 33;
int rozdil3 = 12;
int min4 = 19;
int max4 = 41;
int rozdil4 = 22;
int min6 = 23;
int max6 = 34;
int rozdil6 = 11;

void pribeh() {
	cout << "Zdravim poutniku, vydal ses na dlouhou a strastiplnou cestu. Doufam ze se ti bude darit ted mi prosim rekni sve jmeno.\n";
	cin >> jmeno;
	cout << "Nez zacnes s vyberem role, musim ti vysvetlit, jak se pohybuje a bojuje.";
	cout << "Na sve ceste muzes potkat ctyri ruzne mista\n";
	cout << "Prvnim je vesnice, zde s nikym nebojujes a ziskas 40 zivotu(V).\n";
	cout << "Na druhem miste na tebe zautoci nejaka monstra, nevim kolik jich je a jak jsou silni(M).\n";
	cout << "Treti misto je sklad, je tal mepsi ochranka tak si davej pozor(MB).\n";
	cout << "Ctvrte misto bude ukryvat obchodnika a jako tveho nejvetsiho nepritele ho mmusis porazit, tim skonci hra.\n";
	cout << "Tvym hlavnim cilem je porazit obchodnika (na mape O), musis si k nemu vsak probojovat cestu. Ted ti ukazu mapu, ale neni zatim moc prozkoumana. Mapu si muzes zobrazit jen ve vesnici.\n\n";
	cout << "|--------|\n";
	cout << "|        |\n";
	cout << "|   V    |\n";
	cout << "|        |\n";
	cout << "|--------|\n\n";
	cout << "Souboje tady mohou byt trochu jine, nez na jake jsi zvykli, tady se bojuje na kola. Ty vzdy zacinas a muzes si vybrat meri tremi moznostmi, zautocit klasickym utokem, vyuzit vedlejsi schopnost postavy nebo vyuzit hlavni utok. U hlavni schopnosti vsak jeste budes muset potvrdit jeji pouziti.\n";
	cout << "";

};

void rozdeleni() {
POSTAVA:
	cout << "Na vyber tu je z XX moznosti postav, ale nelze ji zmenit v prubehu hry.\n";
	cout << "Kazda z nich ma zakladni utok, vedlejsi utok nebo vec na vylepseni (lze pouzit jednou za stage) a hlavni utok (lze pouzit jendou za hru).\n";
	cout << "Jednotlive postavy maji ruzne utoky, schopnosti a statisktiky.\n";
	cout << "Vsechny postavy vsak v zakladu maji 100 zivotu a 50 stitu, vse dalsi je napsane u jednotlivych postav.\n\n";
	cout << "Prvni moznost je psychopatisticky doktor, informace o nem se dozvis kdyz das 1.\n";
	cout << "Druha classa je zahradnik, nema tak zajimavy pribeh jako doktor, ale rozhodne se nudit nebudes. Pro zvoleni zmackni 2.\n";
	cout << "Treti moznosti je stat se ITakem. Ve zkrazce to je agresivni programator a hrac. Aby ses stal ITakem, zmackni 3\n";
	cout << "Ctvrou postavou je al-koholik, vatsinu casu uplne mimo. Zmackni 4 a rozhodne nebudes litovat\n";
	cout << "Pata postava je elektrikar, na zvpoleni zmackni 5.\n";
	cout << "Sesta postava je drevorubec, nejlepsi na mytiny okolo. Zmackni 6 a dozvis se vic.\n\n";
	cin >> vyber;

	switch (vyber) {
	case 1:
		cout << "Klasickym jeho utokem je hazeni ruznych pouzitych strikacek od svych pacientu.\n";
		cout << "Muze si take oblect svuj plast a vylepsi se mu stity.\n";
		cout << "Posledni hlavni vec u teto postavy je disociativní porucha identity, to zpusobi ze kdyz mas pod 10 zivotu, tak kontrolu prevezme druha osobnost.\n\n";
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- 22-37 |\n";
		cout << "| Penize   --       |\n";
		cout << "|-------------------|\n\n";
		cout << "Obleceni doktorskeho plastw -- +30 stitu.\n";
		cout << "Zmena osobnosti -- zivoty se dostanou na maximum, ale stratis vsechnu energii.\n";
		break;


	case 2:
		cout << "Zahradnik ma jako zakladni utok hazeni kvetinacu, mozna to neni nejsilnejsi, ale hodil po tobe uz nekdy nekdo kvetinac??\n";
		cout << "SALAT\n";
		cout << "Nejdulezitejsi je vsak radioaktivni mrkev...ano, slysel jsi spravne radioaktivni mrkev.\n\n";
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- 28-39 |\n";
		cout << "| Penize   --       |\n";
		cout << "|-------------------|\n\n";
		cout << "SALAT\n";
		cout << "Mrkev kousne tveho protivnika, tak bude dostavat 13 pozkozeni dalsich pet kol.\n";
		break;

	case 3:
		cout << "ITak ma jako nejbeznejsi utok hod klavesnici, precejen kdyz se nedari, tak se nedari.\n";
		cout << "Kdyz je spatny internet a ani zniceni klavesnice ti nepomuze, je cas se zvednou a nekoho rozbit.\n";
		cout << "Nejsilnejsi je vsak kdyz ma absolutni klid a jeho nervy z oceli ho chrani.\n\n";
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- 21-33 |\n";
		cout << "| Penize   --       |\n";
		cout << "|-------------------|\n\n";
		cout << "Spatny internet -- +10 utoku na dalsi 3 kola.\n";
		cout << "Nervy z oceli ti raruci, ze dalsi kolo nedostanes zadne pozkozeni.\n";
		break;

	case 4:
		cout << "Klasicky utok nemuize byt nic jineho nez hazeni plechovek od piva, to vzdy fungovalo a fungovat bude.\n";
		cout << "Kdyz je potreba neco silnejsiho, tak si da Branik a je spokojenej.\n";
		cout << "Kdyz uz svet speje do zahuby, al-koholik vezme bednu od Whisky a nikdo se mu nevyrovna.\n\n";
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- 19-41 |\n";
		cout << "| Penize  --       |\n";
		cout << "|-------------------|\n\n";
		cout << "Branik -- +20 zivotu\n";
		cout << "Bedna od whisky ubere protivniku 30 zivotu.\n";
		break;

	case 5:
		cout << "Elektirkar je neco jako student Panske...uplne useless, vyber si neco pouzitelneho.\n\n";
		goto POSTAVA;

	case 6:
		cout << "Drevorubec je jednoduchy, vezme sisky napadany kolem a s jeho presnosti se vzdy trefi.\n";
		cout << "U drevorubce nikdo pracovni obleceni neresi, ale kdyz si vezme svoji flanelovou kosili, nikdo se mu dripem nevyrovna\n";
		cout << "Kdyz se mu uz falt nedari, prestane stromy kacet pohledem a vezme si sekeru, to uz je fakt problem.\n\n";
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- 23-34 |\n";
		cout << "| Penize   --       |\n";
		cout << "|-------------------|\n\n";
		cout << "Flanelova kosile vstreba polovinu utoku protivnika, takze dostanes jen 50%.\n";
		cout << "Sekera -- +15 utok\n";
		break;
	};

	cout << "Pro potvrzeni hrdiny zmackni 1, pro zmenu cokoliv jineho\n";
	cin >> potvrzeni;
	if (potvrzeni == 1) {
		cout << "Gratuluji, vybral sis postavu.Nyni muzes vejit do podzemi a zacit bojovat proti monstrum.\n";
		cout << "Zde jsou vsechny informace o tve postave.\n";
	}
	else {
		cout << "Vidim, ze nejsi spokojeny se svou postavou, ted si ji jeste muzes zmenit.\n";
		goto POSTAVA;
	}
};

void randomutok() {
	if (vyber == 1) {
		srand(time(NULL));
		utok = min1 + (rand() % rozdil1);
		penize = max1 - utok + 10;
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- " << utok << "    | \n";
		cout << "| Energie  -- " << penize << "    | \n";
		cout << "|-------------------|\n\n";

	}
	else if (vyber == 2) {
		srand(time(NULL));
		utok = min2 + (rand() % rozdil2);
		penize = max2 - utok + 10;

		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- " << utok << "    |\n";
		cout << "| Energie  -- " << penize << "    |\n";
		cout << "|-------------------|\n\n";

	}
	else if (vyber == 3) {
		srand(time(NULL));
		utok = min3 + (rand() % rozdil3);
		penize = max3 - utok + 10;
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- " << utok << "    |\n";
		cout << "| Energie  -- " << penize << "    |\n";
		cout << "|-------------------|\n\n";
	}
	else if (vyber == 4) {
		srand(time(NULL));
		utok = min4 + (rand() % rozdil4);
		penize = max4 - utok + 10;
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- " << utok << "    |\n";
		cout << "| Energie  -- " << penize << "    |\n";
		cout << "|-------------------|\n\n";
	}
	else if (vyber == 6) {
		srand(time(NULL));
		utok = min6 + (rand() % rozdil6);
		penize = max6 - utok + 10;
		cout << "| ------------------|\n";
		cout << "| Zivoty   -- 100   |\n";
		cout << "| Stity    -- 50    |\n";
		cout << "| Utok     -- " << utok << "    |\n";
		cout << "| Energie  -- " << penize << "    |\n";
		cout << "|-------------------|\n\n";
	}
}

void prvniMistnost() {
	cout << "Ted muzes jen vejit do prvni mistnosti, pojd.\n";
	Sleep(5000);
	system("CLS");
	cout << "Vitej v prvni mistnosti, zde se postavis jen jednomu monstru. Toto monstrum ma jen 100 zivotu.\n";
	cout << "Monstrum: Takze ty chces porovnavat sily jo? Mel sis vybrat nekoho slabsiho\n";
	cout << "Zacatek hry, zautoc\n";
}

void zautoceni() {
UTOK:
	cout << "Zmacknete 1 pro klasicky utok\n";
	cout << "Zadej 2 pro vedlejsi schopnost\n";
	cout << "Zadej 3 a aktivujes hlavni schopnost\n";
	cin >> rozhodnuti;
	switch (rozhodnuti) {
	case 1:
		cout << "Monstru jsi ubral " << utok << " zivotu.\n";
		monstrumZivoty = monstrumZivoty - utok;
		cout << "Ted mu zbyva jen " << monstrumZivoty << " zivotu.\n";
		break;
	case 2:
		cout << "Vyuzil jsi svoji vedlejsi schopnost.\n";
		switch (vyber) {
		case 1:
			cout << "Oblekl sis svuj plast, nyni mas o 20 stitu vic.\n";
			stit = stit + 20;
			break;
		case 2:
			cout << "SALAT\n";
			break;
		case 3:
			cout << "Mas slaby internet, tvuj utok bude zvysen o 10 na 3 kola.\n";
			utok = utok + 10;
			break;
		case 4:
			cout << "Vypitim braniku jsi dostal 10 zivoru.\n";
			zivoty = zivoty + 20;
			break;
		case 6:
			cout << "Tva flanelova kosile ti pomuze vstrebat dalsi utok, dostanes jen polovinu.\n";
			if (pozkozeni % 2 == 0) {
				pozkozeni = pozkozeni / 2;
			}
			else {
				pozkozeni = pozkozeni + 1 / 2;
			}
			break;
		}
		break;
	case 3:
		cout << "Prave mas v planu vyuzit svou hlavni schopnost, tu vsak lze pouzit jen jednou za hru, chces ji pouzit?? Pro pouziti zmackni 1.\n";
		cin >> potvrzeni;
		if (potvrzeni == 1) {
			cout << "Pouzil jsi svou hlavni schopnost.\n";
			switch (vyber) {
			case 1:
				cout << "Tva druha osobnost prevzala vsechnu kontrolu, mas zase vsechny zivoty, ale zadnou energii.\n";
				zivoty = 100;
				penize = 0;
				break;
			case 2:
				cout << "Vyvolal jsi radioaktivni mrkev, ta kousla tveho protivnika a nyni mu bude dalsich 5 kol ubirat 13 zivoru.\n";
				monstrumZivoty = monstrumZivoty - 13;
				break;
			case 3:
				cout << "Dostal ses do stavu absolutniho klidu, dalsi kolo nedostanes zadne pozkozeni.\n";
				pozkozeni = 0;
				break;
			case 4:
				cout << "Hodil jsi po neprateli bednu od whisky a ubral jsi mu 30 zivotu\n";
				monstrumZivoty = monstrumZivoty - 30;
				break;
			case 6:
				cout << "XXX\n";
				break;

			}
		}
		break;
	}
}

void utokMonstra() {
	if (monstrumZivoty <= 0) {
		cout << "Ted by monstrum nemelo utocit.\n";
	}
	else {
		cout << "Ted je na tahu monstrum.\n";
		Sleep(5000);
		cout << "Monstrum ti ubralo " << pozkozeni << " zivotu\n";
		zivoty = zivoty - pozkozeni;
		monstrumUtok = pozkozeni;
		cout << "Ted ti zbyva " << zivoty << " zivotu\n";
	}

}

void vesnice() {
	cout << "Ahoj, vitej v nasi vesnici. Tady se plati zlataky, ktere muzes dostat ze zabiti monstra.\n";
	cout << "V tuto chvili cekame na dodavku novych veci, takze tu toho tolik neni. Stejne si vsak neco muzes najit, ukazu ti produkty a cenik.\n";
CENIK:
	cout << "Ted mas " << penize << " penez.\n";
	cout << "|-----------------------------|\n";
	cout << "| Brenni              -- 20   |\n";
	cout << "| Upraveni zbrane     -- 15   |\n";
	cout << "| Maly elixir zivotu  -- 10   |\n";
	cout << "| Velky elixir zivotu -- 20   |\n";
	cout << "|-----------------------------|\n\n";
	cout << "Pokud nechces nic nakupovat, zmackni 0.\n";
	cout << "Jestli chcces koupit brneni, dej 1.\n";
	cout << "Pro Upravu zbrane zmackni 2.\n";
	cout << "Pro maly elixir dej 3 a pro velky 4.\n\n";
	cin >> nakup;
	switch (nakup) {
	case 0:
		break;
	case 1:
		cout << "Brneni ti zvysi stity o 15.\n";

		if (penize >= 20) {
			stit = stit + 15;
			penize = penize - 20;
			break;
		}
		else {
			cout << "Jsi moc chudy na tento nakup.\n";
			goto CENIK;
		}

	case 2:
		cout << "Upraveni zbrane pridava pozkozeni o 5 ke kazdemu utoku.\n";

		if (penize >= 15) {
			utok = utok + 5;
			penize = penize - 15;
			break;
		}
		else {
			cout << "Jsi moc chudy na tento nakup.\n";
			goto CENIK;
		}
	case 3:
		cout << "Maly elixir ti prida 5 zivotu.\n";

		if (penize >= 10) {
			zivoty = zivoty + 5;
			penize = penize - 10;
			break;
		}
		else {
			cout << "Jsi moc chudy na tento nakup.\n";
			goto CENIK;
		}
	case 4:
		cout << "Velky elixir te postavi na nohy a da ti 15 zivotu.\n";
		if (penize >= 20) {
			zivoty = zivoty + 15;
			penize = penize - 20;
			break;
		}
		else {
			cout << "Jsi moc chudy na tento nakup.\n";
			goto CENIK;
		}
	}

}

void vicMonster() {
	srand(time(NULL));
	monstra = 2 + (rand() % 2);
	cout << "Vesel jsi do dalsi mistnosti, tady te cekaji " << monstra << " monstra.\n";
	cout << "Zpusob utoku  je stale stejny, ale kdyz pouzijes specialni schopnost, tak se bude aplikovat na vsechny postavy.\n";
	cout << "Zaronev vsak nemuzes poskodit vice monstre polecne, musis je zabijet postupne.\n";
	monstrumZivoty = monstrumZivoty * monstra;
	monstraUtok = monstrumUtok * monstra;

	cout << "Monstra ti postupne ubrala celkem " << monstraUtok << " zivotu.\n";
	zivoty = zivoty - monstraUtok;
	cout << "V tuto chvili mas " << zivoty << " zivotu.\n";

}

void vicUtoku() {
	cout << "ZKOUSKA\n";
}

void miniBoss1() {
	cout << "Ted jsi narazil na nekoho silnejsiho.\n";
}

void utokMiniBoss() {
	if (miniBossZivoty <= 0) {
		cout << "Ted by monstrum nemelo utocit.\n";
	}
	cout << "V tuto chvili na tebe utoci mini boss.\n";
	Sleep(5000);
	cout << "Ten ti ubral " << miniBossUtok << " zivotu.\n";
	zivoty = zivoty - miniBossUtok;
	cout << "Ted mas " << zivoty << " zivotu.\n";
}

void miniBoss2() {
	cout << "Zase je tu nekdo silnejsi.\n";
}




//*****************
int main() {

	pribeh();

	rozdeleni();

	randomutok();

	prvniMistnost();

	zautoceni();

	utokMonstra();

	while (zivoty > 0) {
		zautoceni();
		if (monstrumZivoty > 0) {
			utokMonstra();
		}
		if (zivoty <= 0) {
			cout << "Prohral jsi, nebyl jsi dostatecne silny na porazeni tohoto monstra.\n";
			cout << "Doufam, ze to brzy zkusis znovu a uspesne.\n";
			break;
		}
		if (monstrumZivoty <= 0) {
			cout << "Porazil jsi toto prvni monstrum, pokracuj do dalsi mistnosti.\n";
			cout << "V tuto chvili mas " << zivoty << "zivotu.\n";
			Sleep(1000);
			system("CLS");
			break;
		}
	}
	monstrumZivoty = 30;
	cout << "\n";

	vesnice();
	Sleep(1000);
	system("CLS");

	vicMonster();
	while (zivoty > 0) {
		zautoceni();
		if (monstraZivoty > 0) {
			vicUtoku();
			utokMonstra();
		}
		if (zivoty <= 0) {
			cout << "Prohral jsi, nebyl jsi dostatecne silny na porazeni tohoto monstra.\n";
			cout << "Doufam, ze to brzy zkusis znovu a uspesne.\n";
			break;
		}
		if (monstrumZivoty <= 0) {
			cout << "Porazil jsi prvni skupinu monster, jen tak dal.\n";
			cout << "V tuto chvili mas " << zivoty << " zivotu.\n";
			Sleep(10000);
			system("CLS");
			break;
		}
	}
	monstrumZivoty = 30;
	//---------

	vicMonster();
	while (zivoty > 0) {
		zautoceni();
		if (monstraZivoty > 0) {
			utokMonstra();
		}
		if (zivoty <= 0) {
			cout << "Prohral jsi, nebyl jsi dostatecne silny na porazeni tohoto monstra.\n";
			cout << "Doufam, ze to brzy zkusis znovu a uspesne.\n";
			goto KONEC;
		}
		if (monstrumZivoty <= 0) {
			cout << "Porazil jsi prvni skupinu monster, jen tak dal.\n";
			cout << "V tuto chvili mas " << zivoty << " zivotu.\n";
			Sleep(10000);
			system("CLS");
			break;
		}
	}
	monstrumZivoty = 30;
	cout << "Pokus\n";
	//------------------------------------
	miniBoss1();

	while (zivoty > 0) {
		zautoceni();
		if (miniBossZivoty > 0) {
			utokMiniBoss();
		}
		if (zivoty <= 0) {
			cout << "Prohral jsi, nebyl jsi dostatecne silny na porazeni tohoto monstra.\n";
			cout << "Doufam, ze to brzy zkusis znovu a uspesne.\n";
			break;
		}
		if (miniBossZivoty <= 0) {
			cout << "Porazil jsi prvniho mini bosse, jen tak dal.\n";
			cout << "V tuto chvili mas " << zivoty << "zivotu.\n";
			Sleep(1000);
			system("CLS");
			goto KONEC;
		}
	}

	vesnice();
	Sleep(1000);
	system("CLS");

	vicMonster();
	while (zivoty > 0) {
		zautoceni();
		if (monstraZivoty > 0) {
			utokMonstra();
		}
		if (zivoty <= 0) {
			cout << "Prohral jsi, nebyl jsi dostatecne silny na porazeni tohoto monstra.\n";
			cout << "Doufam, ze to brzy zkusis znovu a uspesne.\n";
			break;
		}
		if (monstrumZivoty <= 0) {
			cout << "Porazil jsi prvni skupinu monster, jen tak dal.\n";
			cout << "V tuto chvili mas " << zivoty << "zivotu.\n";
			Sleep(1000);
			system("CLS");
			break;
		}
	}
	monstrumZivoty = 30;
	cout << "Pokus2\n";

	miniBoss2();
	while (zivoty > 0) {
		zautoceni();
		if (miniBossZivoty > 0) {
			utokMiniBoss();
		}
		if (zivoty <= 0) {
			cout << "Prohral jsi, nebyl jsi dostatecne silny na porazeni tohoto monstra.\n";
			cout << "Doufam, ze to brzy zkusis znovu a uspesne.\n";
			break;
		}
		if (miniBossZivoty <= 0) {
			cout << "Porazil jsi prvni skupinu monster, jen tak dal.\n";
			cout << "V tuto chvili mas " << zivoty << "zivotu.\n";
			Sleep(1000);
			system("CLS");
			break;
		}
	}



KONEC:
	cout << "KONEC";
}
