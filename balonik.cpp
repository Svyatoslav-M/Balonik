#include "balonik.h"

balonik::balonik(float poj, string nowa_nazwa) {
	wysokosc = 0;
	srednica = 0;
	nazwa = nowa_nazwa;
}

float balonik::zmien_wysokosc(float wys) {
	wysokosc = wys;
	return 0;
}

float balonik::zmien_srednice(float sred) {
	srednica = sred;
	return 0;
}

void balonik::wyswietl() {
	if (srednica) {
		cout << "Tu balonik " << nazwa << " - ma  " << srednica << " cm srednicy i jeste na wysokosci " << wysokosc << " m" << endl;
	}
	
}

string balonik::GetNazwa() { return nazwa; }

float pompuj(balonik &zmien_srednice, float s) {
	
	zmien_srednice.zmien_srednice(sqrt(s / 3.14));
	cout << zmien_srednice.GetNazwa() << " jest zapompowany" << endl;
	return 0;
}
