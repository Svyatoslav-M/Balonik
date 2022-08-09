#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class balonik {

private:
	float  wysokosc;
	string nazwa;
	float srednica;
public:
	balonik(float poj, string nowa_nazwa);
	void wyswietl();
	float zmien_wysokosc(float wys);
	float zmien_srednice(float sred);
	string GetNazwa();
};

float pompuj(balonik &kan, float v);