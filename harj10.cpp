/*		Valtteri Louhelainen

Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
että negatiivisten kokonaislukujen osuuden. Lukujen syöttä lopetetaan
syöttämällä luku 0.

Tulostus:
Syötit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteensä 10 kpl 100.00%
*/

#include <iostream>
using namespace std;

void main()
{
	int luku[30];
	int temp;
	bool syotto = true;
	short lukunro = 0;
	short i;
	short pos = 0;
	short neg = 0;
	float posf;
	float negf;

	cout << "Sy\x94t\x84 kokonaislukuja.\nLopeta lukujen sy\x94tt\x94 sy\x94tt\x84m\x84ll\x84 luku 0.\n";
	while (syotto)
	{
		cin >> temp;
		if (temp == 0)
			break;
		lukunro++;
		luku[lukunro] = temp;
	}

	for (i = 1; i <= lukunro; i++)
	{
		if (luku[i] > 0)
			pos++;
		else if (luku[i] < 0)
			neg++;
	}

	negf = 100 * neg / lukunro;
	posf = 100 * pos / lukunro;


	cout << "Sy\x94tit kokonaislukuja seuraavasti:\n";
	cout << "Negatiiviset " << neg << " kpl " << negf << "%\n";
	cout << "Positiiviset " << pos << " kpl " << posf << "%\n";
	cout << "Yhteens\x84 " << lukunro << " kpl 100%\n";
}