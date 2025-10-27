#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "StatoSemaforo.h"
#include "Punto.h"
#include "main.h"

using namespace std;

int main()
{	
	/*

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

	#pragma region Es10

	int valoreIniziale = 13;
	int valoreMoltiplicato = valoreIniziale << 3;
	int valoreDiviso = valoreIniziale >> 2;

	cout << "Valore Moltiplicato: " << valoreMoltiplicato << endl;
	cout << "Valore Diviso: " << valoreDiviso << endl;

	#pragma endregion

	*/

	/*

	#pragma region Es1_b

	int numero = 42;
	int* p_numero = &numero;

	cout << "Numero: " << numero << endl;
	cout << "Numero Puntatore: " << *p_numero << endl;

	#pragma endregion

	#pragma region Es2_b
	
	double prezzo = 99.90;
	double* p_prezzo = &prezzo;

	cout << "Prezzo prima della modifca: " << prezzo << endl;
	*p_prezzo = 149.99;
	cout << "Prezzo dopo della modifca: " << prezzo << endl;
	
	#pragma endregion

	#pragma region Es3_b

	int valore = 5;
	cout << "Valore prima della modifca: " << valore << endl;
	Raddoppia(&valore);
	cout << "Valore dopo della modifca: " << valore << endl;

	#pragma endregion

	#pragma region Es4_b
	
	int a = 10;
	int b = 20;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	Scambia(&a, &b);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	#pragma endregion

	#pragma region Es5_b

	char parola[] = {'P', 'u', 'n', 't', 'a', 't', 'o', 'r', 'e'};
	char* p_parola = parola;

	cout << "Parola prima della modifica: ";
	for(char carattere : parola)
		cout << carattere;

	*p_parola = 'C';

	cout << endl << "Parola dopo della modifica: ";
	for (char carattere : parola)
		cout << carattere;

	cout << endl;

	#pragma endregion

	#pragma region Es6_b

	int numeri[] = { 1, 3, 5, 7, 9 };
	int* p_array = numeri;

	cout << "Il terzo elemento dell'array e': " << *(p_array + 2) << endl;

	#pragma endregion

	#pragma region Es7_b

	int voti[] = { 22, 25, 30, 28 };
	int* p_voti = voti;

	for (int i = 0; i < std::size(voti); i++)
		cout<< "Elemento[" << i << "]: " << *(p_voti + i) << endl;

	#pragma endregion

	#pragma region Es8_b

	int* numeroDinamico = new int(123);
	cout << "Numero dinamico: " << *numeroDinamico << endl;
	delete numeroDinamico;
	numeroDinamico = nullptr;

	#pragma endregion

	#pragma region Es9_b

	Punto *punto = new Punto();
	punto -> x = 10;
	punto -> y = 5;

	cout << "Punto -> x: " << punto -> x << endl;
	cout << "Punto -> y: " << punto -> y << endl;

	delete punto;
	punto = nullptr;

	#pragma endregion

	*/

	#pragma region Es10_b

	int a = 100;
	int* p1 = &a;
	int** p2 = &p1;

	cout << "Doppia indirezione: " << **p2 << endl;
	cout << "Indirizzo a: " << &(*p1) << endl;
	cout << "Indirizzo p1: " << &(*p2) << endl;

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


#pragma region Es3_b

void Raddoppia(int* valore)
{
	*valore *= 2;
}

#pragma endregion

#pragma region Es4_b

void Scambia(int* a, int* b)
{
	int c = *b;

	*b = *a;
	*a = c;
}

#pragma endregion