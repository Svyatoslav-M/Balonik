//Wersja dla ambitnych

#include "balonik.h"


int main(int argc, char *argv[]) {
	
	balonik czerwony(0, "czerwony");
	balonik zielony(0, "zielony");
	balonik niebieski(0, "niebieski");
	int wybor, wybor_case3, wybor_case2;
	float tab[3] = { 0.0,0.0,0.0 };

	cout << "Program balonik - wybier dzialanie" << endl;
	
	while (1) {

		cout << "\n\t1 - pokaz zawartosc"
			<< "\n\t2 - zmienic wysokosc"
			<< "\n\t3 - dodac srednicy"
			<< "\n\t0 - koniec" << endl;
		cout << endl << "Twoj wybor" << endl;

		cin >> wybor;
		switch (wybor) {

		case 0:

			cout << "Do widzenia!" << endl;
			cout << endl; system("pause"); return 0;

		case 1:

			czerwony.wyswietl();
			zielony.wyswietl();
			niebieski.wyswietl();
			break;

		case 2:
			cout << "Czy chciesh zmienic wysokosc czerwonego? 1 - Tak; 0 - Nie ";
			cin >> wybor_case2;
			while (wybor_case2 != 1 && wybor_case2 != 0) {
				cout << "Tylko 1 lub 0! ";
				cin >> wybor_case2;
			}
			
			if (wybor_case2) {
				cout << "Podaj wysokosc ";
				cin >> wybor_case2;
				while (wybor_case2 < 0) {
					cout << "Trzeba > 0! ";
					cin >> wybor_case2;
				}
				czerwony.zmien_wysokosc(wybor_case2);
			}
			cout << "Czy chciesh zmienic wysokosc zielonego? 1 - Tak; 0 - Nie ";
			cin >> wybor_case2;
			while (wybor_case2 != 1 && wybor_case2 != 0) {
				cout << "Tylko 1 lub 0! ";
				cin >> wybor_case2;
			}
			if (wybor_case2) {
				cout << "Podaj wysokosc ";
				cin >> wybor_case2;
				while (wybor_case2 < 0) {
					cout << "Trzeba > 0! ";
					cin >> wybor_case2;
				}
				zielony.zmien_wysokosc(wybor_case2);
			}
			cout << "Czy chciesh zmienic wysokosc niebieskiego? 1 - Tak; 0 - Nie ";
			cin >> wybor_case2;
			while (wybor_case2 != 1 && wybor_case2 != 0) {
				cout << "Tylko 1 lub 0! ";
				cin >> wybor_case2;
			}
			if (wybor_case2) {
				cout << "Podaj wysokosc ";
				cin >> wybor_case2;
				while (wybor_case2 < 0) {
					cout << "Trzeba > 0! ";
					cin >> wybor_case2;
				}
				niebieski.zmien_wysokosc(wybor_case2);
			}
			break;

		case 3:
			
			cout << "Czy chciesh dodac do czerwonego? 1 - Tak; 0 - Nie ";
			cin >> wybor_case3;
			while (wybor_case3 != 1 && wybor_case3 != 0) {
				cout << "Tylko 1 lub 0! ";
				cin >> wybor_case3;
			}

			if (wybor_case3) {
				cout << "Podaj srednicu ";
				cin >> wybor_case3;
				while (wybor_case3 < 0) {
					cout << "Trzeba > 0! ";
					cin >> wybor_case3;
				}
				tab[0] += wybor_case3;
				pompuj(czerwony, tab[0]);
			}
			cout << "Czy chciesh dodac do zielonego? 1 - Tak; 0 - Nie ";
			cin >> wybor_case3;
			while (wybor_case3 != 1 && wybor_case3 != 0) {
				cout << "Tylko 1 lub 0! " << endl;
				cin >> wybor_case3;
			}
			if (wybor_case3) {
				cout << "Podaj srednicu ";
				cin >> wybor_case3;
				while (wybor_case3 < 0) {
					cout << "Trzeba > 0!";
					cin >> wybor_case3;
				}
				tab[1] += wybor_case3;
				pompuj(zielony, tab[1]);
			}
			cout << "Czy chciesh dodac do niebieskiego? 1 - Tak; 0 - Nie ";
			cin >> wybor_case3;
			while (wybor_case3 != 1 && wybor_case3 != 0) {
				cout << "Tylko 1 lub 0! " << endl;
				cin >> wybor_case3;
			}
			if (wybor_case3) {
				cout << "Podaj srednicu ";
				cin >> wybor_case3;
				while (wybor_case3 < 0) {
					cout << "Trzeba > 0! ";
					cin >> wybor_case3;
				}
				tab[2] += wybor_case3;
				pompuj(niebieski, tab[2]);
			}
			break;

		}
	}
	
	system("pause"); cout << endl;
}


