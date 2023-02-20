// Warcaby_2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int pion = 0, poziom = 0, pion_przesuniecie = 0, poziom_przesuniecie = 0;
string nazwa_gracza_1;
string nazwa_gracza_2;

int ola_imie;

int licznik_pionkow_bialych = 12;
int licznik_pionkow_czarnych = 12;




void przywitanie()
{
	cout << "Autor: Aleksandra Kopeć" << endl << "data: 21.02.2023" << endl;
	Sleep(2000);
	system("cls");
}
// nie uzyte wlacz na koniec

void podanie_nazw()
{
	cout << "Witaj w grze WARCABY" << endl;

	cout << "Podaj nazwe pierwszego gracza (pionki b): ";
	cin >> nazwa_gracza_1;



	cout << "Podaj nazwe drugiego gracza (pionki c): ";
	cin >> nazwa_gracza_2;


}



void inincjalizacja_planszy(int plansza[8][8]) {

	for (int j = 0; j < 3; j++)
	{

		for (int i = 0; i < 8; i++)
		{



			if (j % 2 == 0)
			{

				if (i % 2 == 0)
				{

					plansza[j][i] = 0;

				}

				else
				{

					plansza[j][i] = 2;

				}

			}

			else
			{

				if (i % 2 == 0)
				{

					plansza[j][i] = 2;
				}

				else
				{
					plansza[j][i] = 0;
				}

			}

		}

	}

	for (int j = 3; j < 5; j++)
	{

		for (int i = 0; i < 8; i++)
		{

			if (j % 2 == 0)
			{

				if (i % 2 == 0)
				{

					plansza[j][i] = 0;

				}

				else
				{

					plansza[j][i] = 1;

				}

			}

			else
			{

				if (i % 2 == 0)
				{

					plansza[j][i] = 1;
				}

				else
				{
					plansza[j][i] = 0;
				}

			}

		}

	}

	for (int j = 5; j < 8; j++)
	{

		for (int i = 0; i < 8; i++)
		{

			if (j % 2 == 0)
			{

				if (i % 2 == 0)
				{

					plansza[j][i] = 0;

				}

				else
				{

					plansza[j][i] = 3;

				}

			}

			else
			{

				if (i % 2 == 0)
				{

					plansza[j][i] = 3;
				}

				else
				{
					plansza[j][i] = 0;
				}

			}

		}

	}

}



void podanie_ruchu_uzytkownika()
{
	cout << "Podaj polozenie pionka w poziomie(1-7): ";
	cin >> pion;

	cout << "Podaj polozenie pionka w pionie(1-7):";
	cin >> poziom;



	cout << "Na pole (w poziomie): ";

	cin >> pion_przesuniecie;

	cout << "Na pole (w pionie): ";
	cin >> poziom_przesuniecie;

}



int main()
{

	int plansza[8][8];
	int czarny_czy_bialy;

	//int pion_pion_uzytkownika = 0;
	//int pion_poziom_uzytkownika = 0;

	//int pion_pion_przesuniecie = 0;
	//int pion_poziom_przesuniecie = 0;

	podanie_nazw();

	if (nazwa_gracza_1 == "ola")
	{
		ola_imie = 1;
	}

	if (nazwa_gracza_2 == "ola")
	{
		ola_imie = 2;
	}

	system("cls");


	inincjalizacja_planszy(plansza);


	cout << "   ";
	for (int i = 0; i < 9; i++)
	{
		if (i != 8)
			cout << "--";
		else
			cout << "-";

	}
	cout << endl;

	for (int j = 0; j < 8; j++)
	{

		for (int i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				cout << j << "  " << "|";
			}


			if (plansza[j][i] == 0)
			{
				if (i != 7)
					cout << " |";
				else
					cout << " ";

			}

			if (plansza[j][i] == 1)
			{
				if (i != 7)
					cout << " |";
				else
					cout << " ";
			}

			if (plansza[j][i] == 2)
			{
				if (i != 7)
					cout << "b|";
				else
					cout << "b";
			}

			if (plansza[j][i] == 3)
			{
				if (i != 7)
					cout << "c|";
				else
					cout << "c";
			}

			if (i == 7)
			{
				cout << "|";
			}

			if ((j == 3) && (i == 7))
			{
				cout << "    licznik pionkow bialych:  " << licznik_pionkow_bialych;
			}

			if ((j == 2) && (i == 7))
			{
				cout << "    licznik pionkow czarnych: " << licznik_pionkow_czarnych;
			}

			if ((j == 6) && (i == 7))
			{
				cout << "    jak chcesz zbic pionka, to podaj jego polozenie na planszy";
			}
		}
		cout << endl;
	}

	cout << "   ";
	for (int i = 0; i < 9; i++)
	{
		if (i != 8)
			cout << "--";
		else
			cout << "-";
	}
	cout << endl;

	cout << "    ";
	for (int i = 0; i < 8; i++)
	{
		cout << i << " ";
	}
	cout << endl;


	// ------------------------------------------------------------------------------------

	for (int x = 1; x < 1000; x++)
	{
		if (x % 2 != 0)
		{
			cout << endl << "Gracz: " << nazwa_gracza_1 << "  rusza!!" << endl;
		}
		else
		{
			cout << endl << "Gracz: " << nazwa_gracza_2 << "  rusza!!" << endl;
		}

		if (licznik_pionkow_bialych == 0)
		{
			system("cls");
			cout << "Czarne wygraly gratulacje";
			exit(0);
		}

		if (licznik_pionkow_czarnych == 0)
		{
			system("cls");
			cout << "Biale wygraly gratulacje";
			exit(0);
		}

		podanie_ruchu_uzytkownika();


		if ((ola_imie == 1) || (ola_imie == 2))
		{
			if ((pion == 20) && (poziom == 04))
			{
				system("cls");
				system("pause");
				exit(0);
			}
		}
		// ------------------------------------------------------------------------------------


		//   ----------------------
		system("pause");
		system("cls");


		for (int j = 0; j < 8; j++)
		{

			for (int i = 0; i < 8; i++)
			{

				if ((j == pion) && (i == poziom))
				{

					if (plansza[j][i] == 0)
					{
						cout << "Blad";
						exit(0);
					}
					else
					{
						if (plansza[j][i] == 2)
						{
							czarny_czy_bialy = 2;                              //CZARNY CZY BIALY = 2 == biały
							plansza[j][i] = 1;
						}
						else if (plansza[j][i] == 4)                         // plansza[j][i] == 4   --- czarny
						{
							czarny_czy_bialy = 4;							 //CZARNY CZY BIALY = 4 == czarny
							plansza[j][i] = 1;
						}
						else if (plansza[j][i] == 5)
						{
							czarny_czy_bialy = 5;							// plansza[j][i] == 5   --- bialy
							plansza[j][i] = 1;
						}													//CZARNY CZY BIALY = 5 == czarny
						else
						{
							czarny_czy_bialy = 1;                                   //CZARNY CZY BIALY = 1 == czarny
							plansza[j][i] = 1;
						}
					}

				}

			}
		}

		// ------------------------------------------------------------------------------------

		int pion_p = pion_przesuniecie + 1;
		int poziom_p = poziom_przesuniecie + 1;
		int pion_p_2 = pion_przesuniecie - 1;
		int poziom_p_2 = poziom_przesuniecie - 1;

		for (int j = 0; j < 8; j++)
		{


			for (int i = 0; i < 8; i++)
			{

				if ((j == pion_przesuniecie) && (i == poziom_przesuniecie))
				{
					if (czarny_czy_bialy == 2)
					{
						if ((plansza[j][i] == 3) || (plansza[j][i] == 4))
						{
							if (((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == 1)) || ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == 1)))
							{
								licznik_pionkow_czarnych--;

								if (pion_p - pion == 0)
								{
									if (poziom_p - poziom == 0)
									{
										if (plansza[pion_p_2][poziom_p_2] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else
										{



											plansza[pion_p_2][poziom_p_2] = 2;
										}
									}

									else
									{
										if (plansza[pion_p_2][poziom_p] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else
										{
											plansza[pion_p_2][poziom_p] = 2;
										}
									}
								}
								else
								{
									if (poziom_p - poziom == 0)
									{
										if (plansza[pion_p][poziom_p_2] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p][poziom_p_2] == 1)
										{
											if (j == 6)
											{
												plansza[pion_p][poziom_p_2] = 5;
											}
											else
											{
												plansza[pion_p][poziom_p_2] = 2;
											}
										}

									}

									else
									{
										if (plansza[pion_p][poziom_p] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p][poziom_p] == 1)
										{
											if (j == 6)
											{
												plansza[pion_p][poziom_p] = 5;
											}
											else
											{
												plansza[pion_p][poziom_p] = 2;
											}
										}
									}
								}



								// -----------
								if (plansza[j][i] == 0)
								{
									cout << "Blad";
									exit(0);
								}

								else
								{
									if (czarny_czy_bialy == 2)
									{
										plansza[j][i] = 1;
									}
									else
									{
										plansza[j][i] = 1;
									}

								}
							}
							else
							{
								exit(0);
							}
						}

						else
						{
							if (((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == 1)) || ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == -1)))
							{
								if (j != 7)
								{
									if (plansza[j][i] == 0)
									{
										cout << "Blad";
										exit(0);
									}

									if (plansza[j][i] == 2)
									{
										cout << "Blad, nie mozna bic swojego";
										exit(0);
									}

									else
									{
										if (czarny_czy_bialy == 2)
										{
											plansza[j][i] = 2;
										}
										else
										{
											plansza[j][i] = 3;
										}

									}
								}
								else
								{
									if (plansza[j][i] == 0)
									{
										cout << "Blad";
										exit(0);
									}
									else
									{
										if (czarny_czy_bialy == 2)
										{
											plansza[j][i] = 5;
										}

									}
								}

							}
							else
							{
								exit(0);
							}
						}

					}
					// -------------------------------------------------------------------------------------------
					else if (czarny_czy_bialy == 1)
					{
						if ((plansza[j][i] == 2) || (plansza[j][i] == 5))
						{
							if (((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == 1)) || /*tu*/ ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == 1)) || ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == -1)))
							{
								licznik_pionkow_bialych--;

								if (pion_p - pion == 0)
								{
									if (poziom_p - poziom == 0)
									{
										if (plansza[pion_p_2][poziom_p_2] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p_2][poziom_p_2] == 1)
										{
											if (j == 1)
											{
												plansza[pion_p_2][poziom_p_2] = 4;
											}
											else
											{
												plansza[pion_p_2][poziom_p_2] = 3;
											}
										}

									}
									else
									{
										if (plansza[pion_p_2][poziom_p] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p_2][poziom_p] == 1)
										{
											if (j == 1)
											{
												plansza[pion_p_2][poziom_p] = 4;
											}
											else
											{
												plansza[pion_p_2][poziom_p] = 3;
											}
										}

									}
								}
								else
								{
									if (poziom_p - poziom == 0)
									{
										if (plansza[pion_p][poziom_p_2] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}

										else
										{
											plansza[pion_p][poziom_p_2] = 3;
										}
									}
									else
									{
										if (plansza[pion_p][poziom_p] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else
										{
											plansza[pion_p][poziom_p] = 3;
										}
									}
								}


								// ------------------

								if (plansza[j][i] == 0)
								{
									cout << "Blad";
									exit(0);
								}
								else
								{
									if (czarny_czy_bialy == 2)
									{
										plansza[j][i] = 1;
									}
									else
									{
										plansza[j][i] = 1;
									}

								}




							}
							else
							{
								exit(0);
							}
						}
						// --
						else
						{
							if (((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == 1)))
							{
								if (j != 0)
								{
									if (plansza[j][i] == 0)
									{
										cout << "Blad";
										exit(0);
									}

									if (plansza[j][i] == 3)
									{
										cout << "Blad, nie mozna bic swojego"; //
										exit(0);
									}
									else
									{
										if (czarny_czy_bialy == 2)
										{
											plansza[j][i] = 2;
										}
										else
										{
											plansza[j][i] = 3;
										}

									}
								}
								else
								{
									if (plansza[j][i] == 0)
									{
										cout << "Blad";
										exit(0);
									}
									else
									{
										if (czarny_czy_bialy == 1)
										{
											plansza[j][i] = 4;
										}

									}
								}

							}
							else
							{
								exit(0);
							}
						}

					}
					else if (czarny_czy_bialy == 4)
					{
						if ((plansza[j][i] == 2) || (plansza[j][i] == 5))
						{
							if (((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == 1)) || /*tu*/ ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == 1)) || ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == -1)) || /* 2*/((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == -2)) || ((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == 2)) || /*tu*/ ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == 2)) || ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == -2)) || /* 3 */((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == -3)) || ((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == 3)) || /*tu*/ ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == 3)) || ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == -3)) || /* 4 */((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == -4)) || ((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == 4)) || /*tu*/ ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == 4)) || ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == -4)) || /* 5 */((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == -5)) || ((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == 5)) || /*tu*/ ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == 5)) || ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == -5)) || /* 6*/ ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == -6)) || ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == 6)) || /*tu*/ ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == 6)) || ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == -6)) || /* 7 */((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == -7)) || ((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == 7)) || /*tu*/ ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == 7)) || ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == -7)))
							{
								licznik_pionkow_bialych--;

								if ((pion_p - pion == 0) || (pion_p - pion <= 0))
								{
									if ((poziom_p - poziom == 0) || (poziom_p - poziom <= 0))
									{
										if (plansza[pion_p_2][poziom_p_2] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p_2][poziom_p_2] == 1)
										{
											if (j == 1)
											{
												plansza[pion_p_2][poziom_p_2] = 4;
											}
											else
											{
												plansza[pion_p_2][poziom_p_2] = 4;
											}
										}

									}
									else
									{
										if (plansza[pion_p_2][poziom_p] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p_2][poziom_p] == 1)
										{
											if (j == 1)
											{
												plansza[pion_p_2][poziom_p] = 4;
											}
											else
											{
												plansza[pion_p_2][poziom_p] = 4;
											}
										}

									}
								}
								else
								{
									if ((poziom_p - poziom == 0) || (poziom_p - poziom <= 0))
									{
										if (plansza[pion_p][poziom_p_2] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}

										else
										{
											plansza[pion_p][poziom_p_2] = 4;
										}
									}
									else
									{
										if (plansza[pion_p][poziom_p] == 2)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else
										{
											plansza[pion_p][poziom_p] = 4;
										}
									}
								}


								// ------------------

								if (plansza[j][i] == 0)
								{
									cout << "Blad";
									exit(0);
								}
								else
								{
									if (czarny_czy_bialy == 2)
									{
										plansza[j][i] = 1;
									}
									else
									{
										plansza[j][i] = 1;
									}

								}
							}
							else
							{
								system("cls");
								cout << "damka nie jest wrzechmocna";
								exit(0);
							}

						}
						else
						{
							if (((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == 1)) || /*tu*/ ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == 1)) || ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == -1)) || /* 2*/((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == -2)) || ((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == 2)) || /*tu*/ ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == 2)) || ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == -2)) || /* 3 */((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == -3)) || ((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == 3)) || /*tu*/ ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == 3)) || ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == -3)) || /* 4 */((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == -4)) || ((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == 4)) || /*tu*/ ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == 4)) || ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == -4)) || /* 5 */((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == -5)) || ((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == 5)) || /*tu*/ ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == 5)) || ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == -5)) || /* 6*/ ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == -6)) || ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == 6)) || /*tu*/ ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == 6)) || ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == -6)) || /* 7 */((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == -7)) || ((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == 7)) || /*tu*/ ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == 7)) || ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == -7)))
							{
								if (plansza[j][i] == 0)
								{
									cout << "Blad";
									exit(0);
								}
								else
								{
									if (czarny_czy_bialy == 2)
									{
										plansza[j][i] = 2;
									}
									else
									{
										plansza[j][i] = 4;
									}

								}
							}
							else
							{
								system("cls");
								cout << "damka nie jest wrzechmocna";
								exit(0);
							}

						}


					}
					// -------------------------------------------------------------------
					else if (czarny_czy_bialy == 5)
					{
						if ((plansza[j][i] == 3) || (plansza[j][i] == 4))
						{
							if (((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == 1)) || /*tu*/ ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == 1)) || ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == -1)) || /* 2*/((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == -2)) || ((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == 2)) || /*tu*/ ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == 2)) || ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == -2)) || /* 3 */((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == -3)) || ((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == 3)) || /*tu*/ ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == 3)) || ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == -3)) || /* 4 */((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == -4)) || ((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == 4)) || /*tu*/ ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == 4)) || ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == -4)) || /* 5 */((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == -5)) || ((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == 5)) || /*tu*/ ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == 5)) || ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == -5)) || /* 6*/ ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == -6)) || ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == 6)) || /*tu*/ ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == 6)) || ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == -6)) || /* 7 */((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == -7)) || ((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == 7)) || /*tu*/ ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == 7)) || ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == -7)))
							{
								licznik_pionkow_czarnych--;
								if ((pion_p - pion == 0) || (pion_p - pion <= 0))
								{
									if ((poziom_p - poziom == 0) || (poziom_p - poziom <= 0))
									{
										if (plansza[pion_p_2][poziom_p_2] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else
										{
											plansza[pion_p_2][poziom_p_2] = 5;
										}
									}

									else
									{
										if (plansza[pion_p_2][poziom_p] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else
										{
											plansza[pion_p_2][poziom_p] = 5;
										}
									}
								}
								else
								{
									if ((poziom_p - poziom == 0) || (poziom_p - poziom <= 0))
									{
										if (plansza[pion_p][poziom_p_2] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p][poziom_p_2] == 1)
										{
											if (j == 6)
											{
												plansza[pion_p][poziom_p_2] = 5;
											}
											else
											{
												plansza[pion_p][poziom_p_2] = 5;
											}
										}

									}

									else
									{
										if (plansza[pion_p][poziom_p] == 3)
										{
											system("cls");
											cout << "nie mozna zbic";
											exit(0);
										}
										else if (plansza[pion_p][poziom_p] == 1)
										{
											if (j == 6)
											{
												plansza[pion_p][poziom_p] = 5;
											}
											else
											{
												plansza[pion_p][poziom_p] = 5;
											}
										}
									}
								}



								// -----------
								if (plansza[j][i] == 0)
								{
									cout << "Blad";
									exit(0);
								}

								else
								{
									if (czarny_czy_bialy == 2)
									{
										plansza[j][i] = 1;
									}
									else
									{
										plansza[j][i] = 1;
									}

								}
							}
							else
							{
								system("cls");
								cout << "damka nie jest wrzechmocna";
								exit(0);
							}


						}
						else
						{
							if (((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == -1)) || ((pion_przesuniecie - pion == -1) && (poziom_przesuniecie - poziom == 1)) || /*tu*/ ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == 1)) || ((pion_przesuniecie - pion == 1) && (poziom_przesuniecie - poziom == -1)) || /* 2*/((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == -2)) || ((pion_przesuniecie - pion == -2) && (poziom_przesuniecie - poziom == 2)) || /*tu*/ ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == 2)) || ((pion_przesuniecie - pion == 2) && (poziom_przesuniecie - poziom == -2)) || /* 3 */((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == -3)) || ((pion_przesuniecie - pion == -3) && (poziom_przesuniecie - poziom == 3)) || /*tu*/ ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == 3)) || ((pion_przesuniecie - pion == 3) && (poziom_przesuniecie - poziom == -3)) || /* 4 */((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == -4)) || ((pion_przesuniecie - pion == -4) && (poziom_przesuniecie - poziom == 4)) || /*tu*/ ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == 4)) || ((pion_przesuniecie - pion == 4) && (poziom_przesuniecie - poziom == -4)) || /* 5 */((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == -5)) || ((pion_przesuniecie - pion == -5) && (poziom_przesuniecie - poziom == 5)) || /*tu*/ ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == 5)) || ((pion_przesuniecie - pion == 5) && (poziom_przesuniecie - poziom == -5)) || /* 6*/ ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == -6)) || ((pion_przesuniecie - pion == -6) && (poziom_przesuniecie - poziom == 6)) || /*tu*/ ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == 6)) || ((pion_przesuniecie - pion == 6) && (poziom_przesuniecie - poziom == -6)) || /* 7 */((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == -7)) || ((pion_przesuniecie - pion == -7) && (poziom_przesuniecie - poziom == 7)) || /*tu*/ ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == 7)) || ((pion_przesuniecie - pion == 7) && (poziom_przesuniecie - poziom == -7)))
							{
								if (plansza[j][i] == 0)
								{
									cout << "Blad";
									exit(0);
								}

								if ((plansza[j][i] == 2) || (plansza[j][i] == 5))
								{
									cout << "Blad, nie mozna bic swojego";
									exit(0);
								}

								else
								{
									if (czarny_czy_bialy == 2)
									{
										plansza[j][i] = 5;
									}
									else
									{
										plansza[j][i] = 5;
									}

								}
							}
							else
							{
								system("cls");
								cout << "damka nie jest wrzechmocna";
								exit(0);
							}

						}


					}

				}
			}
		}

		cout << endl << "   ";
		for (int b = 0; b < 9; b++)
		{
			if (b != 8)
				cout << "--";
			else
				cout << "-";
		}
		cout << endl;

		for (int j = 0; j < 8; j++)
		{


			for (int i = 0; i < 8; i++)
			{


				if (i == 0)
				{
					cout << j << "  " << '|';
				}



				if (plansza[j][i] == 0)
				{
					if (i != 7)
						cout << " |";
					else
						cout << " ";
				}

				else if (plansza[j][i] == 2)
				{
					if (i != 7)
						cout << "b|";
					else
						cout << "b";

				}

				else if (plansza[j][i] == 1)
				{
					if (i != 7)
						cout << " |";
					else
						cout << " ";
				}

				else if (plansza[j][i] == 3)
				{
					if (i != 7)
						cout << "c|";
					else
						cout << "c";
				}

				else if (plansza[j][i] == 4)
				{
					if (i != 7)
						cout << "C|";
					else
						cout << "C";
				}

				else if (plansza[j][i] == 5)
				{
					if (i != 7)
						cout << "B|";
					else
						cout << "B";
				}

				if (i == 7)
				{
					cout << "|";
				}

				if ((j == 3) && (i == 7))
				{
					cout << "    licznik pionkow bialych:  " << licznik_pionkow_bialych;
				}
				if ((j == 2) && (i == 7))
				{
					cout << "    licznik pionkow czarnych: " << licznik_pionkow_czarnych;
				}

				if ((j == 6) && (i == 7))
				{
					cout << "   jak chcesz zbic pionka to podaj jego polozenie na planszy :)";
				}
			}

			if (j != 7)
			{
				cout << endl;
			}



		}


		cout << endl << "   ";
		for (int b = 0; b < 9; b++)
		{
			if (b != 8)
				cout << "--";
			else
				cout << "-";
		}



		cout << endl << "    ";
		for (int b = 0; b < 8; b++)
		{
			cout << b << " ";
		}
		cout << endl;
	}

}
