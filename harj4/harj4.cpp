/*********************************************************************
Tehtävä: HARJOITUS 4
Tekijä: Pekka Melgin
PVM: 10.9.2013
Kuvaus:
Ks. ohjelmakoodia: harj4 (omat esimerkit)

a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mitä rivillä tapahtuu).
c) Muuta vakioden nimet niin, että
MAX => MINIMI
max => MAKSIMI

Muuta ohjelmaa niin, että voit tulostaa ohjelmalla seuraavat ilmoitukset:
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN välissä
**********************************************************************/
#include <iostream> // sis„llytet„„n datavirta, n„pp„imist” ja n„ytt” k„ytt””n
using namespace std; // k„ytet„„n standardi nimiavaruutta

// m„„ritell„„n vakioita
#define MINIMI 10 //  VAKIO MAX arvoksi 10, vanha tapa
const int MAKSIMI = 20; // VAKIO max1 arvoksi 20, uusi tapa

// globaalien muuttujien m„„rittely
int summa; // MUUTTUJA summa

// aliohjelmien esittely
void Laske(int, int);

void main() // p„„ohjelma, ohjelma alkaa t„st„
{ // ALKAA
	// paikallisten muuttujien m„„rittely
	int luku1 = 2; // MUUTTUJA luku1 arvo 2
	int luku2; // MUUTTUJA luku2
	cout<<"Sy”t„ luku: "; // tulostaa n„yt”lle teksti„
	cin>>luku2; // pyyt„„ luvun
	Laske(luku1, luku2); //
	if (summa > MINIMI && summa < MAKSIMI) //
		cout<<"Summa on "<<MINIMI <<":n ja " <<MAKSIMI <<":n v„liss„" <<endl;
	else if (summa > MAKSIMI)
		cout<< "Summa on suurempi kuin "<< MAKSIMI <<endl;
	else
		cout<<"Summa on pienempi kuin "<< MINIMI <<endl;
} // PŽŽTTYY
void Laske(int eka, int toka) //
{ //
	summa = eka + toka; //
} //