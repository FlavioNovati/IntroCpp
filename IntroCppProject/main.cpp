#include <iostream>
#include <string>
#include <vector>
#include "StatoSemaforo.h"
#include "main.h"

using namespace std;

int main()
{
	
	#pragma region Es1

	StatoSemaforo statoSemaforo = StatoSemaforo::GIALLO;
	StampaStatoSemaforo(statoSemaforo);

	#pragma endregion

	#pragma region Es2

	int base = 12;
	int altezza = 5;
	int area = base * altezza;

	area *= 2;

	if(area > 100)
		cout << "L'area raddoppiata e' maggiore di 100" << endl;
	else
		cout << "L'area raddoppiata e' 100 o meno" << endl;

	#pragma endregion

	#pragma region Es3

	for (int i = 1; i <= 20; i++)
	{
		if(i%2 == 0)
			cout << "Il numero: " << i << " e' pari" << endl;
	}

	#pragma endregion

	#pragma region Es4

	int contatore = 5;
	int risultato = 1;

	while (contatore > 0)
	{
		risultato *= contatore;
		contatore--;
	}

	cout << "Il risultato dell'esercizio 4 e': " << risultato << endl;

	#pragma endregion

	#pragma region  Es5

	bool continua = false;

	do
	{
		cout << "Desidera restare nel ciclo? n per uscire" << endl;
		continua = cin.get() != 'n';
	}
	while(continua);

	#pragma endregion

	#pragma region Es6

	int punti = 85;
	int presenze = 90;
	int requisitoMinimo = 60;

	if( punti > requisitoMinimo && presenze >= 80 )
		cout << "Promosso" << endl;
	else
		cout << "Non Promosso" << endl;

	#pragma endregion

	#pragma region Es7
	
	vector<string> colori = { "Rosso", "Verde", "Blu", "Giallo" };
	for(string colore : colori)
		cout << "Il colore e': " << colore << endl;

	#pragma endregion

	#pragma region Es8

	vector<int> prezzi = {10, 25, 5, 40};
	for(auto& prezzo : prezzi)
		prezzo *= 1.1f;

	for(int prezzo : prezzi)
		cout << prezzo << endl;

#pragma endregion

	#pragma region Es9

	__int8 permessi = 6;
	__int8 MASCHERA_SCRITTURA = 2;

	if(permessi & MASCHERA_SCRITTURA)
		cout << "Il permesso di scrittura e' attivo" << endl;
	else
		cout << "Il permesso di scrittura NON e' attivo" << endl;

#pragma endregion

	#pragma region 10

	int valoreIniziale = 13;
	int valoreMoltiplicato = valoreIniziale << 3;
	int valoreDiviso = valoreIniziale >> 2;

	cout << "Valore Moltiplicato: " << valoreMoltiplicato << endl;
	cout << "Valore Diviso: " << valoreDiviso << endl;

	#pragma endregion

}




#pragma region Es1

void StampaStatoSemaforo(StatoSemaforo statoDaStampare)
{
	string statoString = "";

	switch (statoDaStampare)
	{
	case ROSSO:
		statoString = "STOP! Attendere.";
		break;
	case GIALLO:
		statoString = "Attenzione! Prepararsi.";
		break;
	case VERDE:
		statoString = "VIA! Si puo' procedere.";
		break;
	}
	
	cout << statoString << endl;
}

#pragma endregion
