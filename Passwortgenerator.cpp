#include <iostream>
#include <thread>
#include <random>
#include <vector>
#include<windows.h>
#include <fstream>
#include <string>

using namespace std;
using std::string;
extern bool run = true;
std::uniform_real_distribution<float> rl(0, 81);
using std::seed_seq;
int randomizing();
std::seed_seq seq{ randomizing() };
std::ranlux48 engine(seq);

////////////////////////////// die folgenden fuctoins sind nicht von mir, sind da zum hinreichend zuverlässigen Genaerieren von Zufallszahlen und Testen ob eine Eingabe eine Ziffer ist
int how_often() {
	std::seed_seq seed2{ time(NULL) };
	std::default_random_engine stuff(seed2);
	std::uniform_int_distribution<int> distri(15, 55);

	int R = 0;
	R = distri(stuff);
	return R;
}
float idk() {
	std::seed_seq seed1{ time(NULL) };
	std::mt19937_64 rando(seed1);
	std::uniform_real_distribution <float> distr(50, 300);

	float R = 0;
	int Z = 0;
	Z = how_often();
	for (int i = 0; i < Z; i++)
	{
		R = distr(rando);
	}
	return R;
}
int randomizer() {
	std::seed_seq seed1{ time(NULL) };
	std::default_random_engine rando(seed1);
	std::uniform_real_distribution<float> distr(7, 71);
	int R = 0;
	R = distr(rando);
	return R;
}
int randomizingin() {
	std::seed_seq seed1{ randomizer() };
	std::knuth_b rando(seed1);
	std::uniform_real_distribution<float> distr(15, 55);
	int R = 0;
	R = distr(rando);
	return R;
}
int randomizing() {
	std::seed_seq seed1{ randomizingin() };
	std::mt19937 rando(seed1);
	std::uniform_real_distribution<float> distr(15, 55);
	int R = 0;
	R = distr(rando);
	return R;
}
bool isNumber(const string& str
{
	return !str.empty() &&
	std::find_if(str.begin(), str.end(),
	[](unsigned char c) { return !std::isdigit(c); }) == str.end();
}
/////////////////////////////// ab hier von mir

struct node
{
public: 
	int nr = 0;
	string PW;
	string PWnutzen;
	node* next = nullptr;
	node* prev = nullptr;
};

extern node* head = new(node);

int listLänge()
{
	int i =0;
	node* act = head;
	while (act->next != nullptr)
	{
		i = i + 1;
		act = act->next;
	}
	return i;
}

void refreshnum() //zum neu-Nummerierung der Liste vom Kopf ausgehend
{
	if (listLänge() != 0)
	{
		node* act = head;
		head->nr = 1;
		act = act->next;
		while (act->next != nullptr)
		{
			act->nr = act->prev->nr + 1;
			act = act->next;
		}
	}
	else { head->nr = 1; }
	return;
}

char randomLetter() //das geht sicher DEUTLICH eleganter...
{
	char B;
	int N = rl(engine);
	switch (N)
	{
	case  1:B = 'a'; break;
	case  2:B = 'b'; break;
	case  3:B = 'c'; break;
	case  4:B = 'd'; break;
	case  5:B = 'e'; break;
	case  6:B = 'f'; break;
	case  7:B = 'g'; break;
	case  8:B = 'h'; break;
	case  9:B = 'i'; break;
	case 10:B = 'j'; break;
	case 11:B = 'k'; break;
	case 12:B = 'l'; break;
	case 13:B = 'm'; break;
	case 14:B = 'n'; break;
	case 15:B = 'o'; break;
	case 16:B = 'p'; break;
	case 17:B = 'q'; break;
	case 18:B = 'r'; break;
	case 19:B = 's'; break;
	case 20:B = 't'; break;
	case 21:B = 'u'; break;
	case 22:B = 'v'; break;
	case 23:B = 'w'; break;
	case 24:B = 'x'; break;
	case 25:B = 'y'; break;
	case 26:B = 'z'; break;
	case 27:B = 'Ö'; break;
	case 28:B = '|'; break;
	case 29:B = 'ö'; break;
	case 30:B = '>'; break;
	case 31:B = 'A'; break;
	case 32:B = 'B'; break;
	case 33:B = 'C'; break;
	case 34:B = 'D'; break;
	case 35:B = 'E'; break;
	case 36:B = 'F'; break;
	case 37:B = 'G'; break;
	case 38:B = 'H'; break;
	case 39:B = 'I'; break;
	case 40:B = 'J'; break;
	case 41:B = 'K'; break;
	case 42:B = 'L'; break;
	case 43:B = 'M'; break;
	case 44:B = 'N'; break;
	case 45:B = 'O'; break;
	case 46:B = 'P'; break;
	case 47:B = 'Q'; break;
	case 48:B = 'R'; break;
	case 49:B = 'S'; break;
	case 50:B = 'T'; break;
	case 51:B = 'U'; break;
	case 52:B = 'V'; break;
	case 53:B = 'W'; break;
	case 54:B = 'X'; break;
	case 55:B = 'Y'; break;
	case 56:B = 'Z'; break;
	case 57:B = '!'; break;
	case 58:B = '<'; break;
	case 59:B = '$'; break;
	case 60:B = '%'; break;
	case 61:B = '&'; break;
	case 62:B = '/'; break;
	case 63:B = '('; break;
	case 64:B = ')'; break;
	case 65:B = '='; break;
	case 66:B = '?'; break;
	case 67:B = '\\'; break;
	case 68:B = '+'; break;
	case 69:B = '*'; break;
	case 70:B = '#'; break;
	case 71:B = '-'; break;
	case 72:B = '_'; break;
	case 73:B = ','; break;
	case 74:B = '.'; break;
	case 75:B = ';'; break;
	case 76:B = ':'; break;
	case 77:B = '@'; break;
	case 78:B = '{'; break;
	case 79:B = '['; break;
	case 80:B = ']'; break;
	default:B = '}'; break;
	}
	return B;
}

string getPW()
{
	string L = "";
	while (!isNumber(L))
	{
		cout << "l\x84 \bnge? :  ";
		cin >> L;
		if (!isNumber(L)) { cout<<"\nFehleingabe, muss Zahl sein\n\n"; }
	}
	
	int j = stoi(L);

	string PW;
	for (int i = 0; i < j; i++)
	{
		PW = PW + randomLetter();
	}
	return PW;
}

void PWgen()
{
	system("cls");
	cout << "Passwort generieren" << endl << endl;
	node* act = head;

	while (act->next != nullptr) { act = act->next; }

	refreshnum();
	if (act->prev == nullptr)
	{
		cout << "Nr.:      " << act->nr << endl;
		act->PW = getPW();
		string n;
		cout << "Nutzen? : "; cin >> n;
		act->PWnutzen = n;
		cout << "Passwort: " << act->PW << endl << endl;
		node* help = act;
		act->next = new(node);
		act = act->next;
		act->prev = help; 
	}
	else
	{
		act->nr = act->prev->nr + 1;
		cout << "Nr.:      " << act->nr << endl;
		act->PW = getPW();
		string n;
		cout << "Nutzen? : "; cin >> n;
		act->PWnutzen = n;
		cout << "Passwort: " << act->PW << endl << endl;
		node* help = act;
		act->next = new(node);
		act = act->next;
		act->prev = help;
	}
	cout << endl;
	system("pause");
	return;
}

void PWread()
{
	system("cls");
	cout << "Ausgabe (" << listLänge() << ")" << endl << endl;

	node* act = head;
	if (listLänge() == 0) { cout << "keine Passw\x94 \brter in Liste" << endl; system("pause"); return; }
	while (act->next != nullptr)
	{
		cout << "Nr.:      " << act->nr << endl;
		cout << "Nutzen:   " << act->PWnutzen << endl;
		cout << "Passwort: " << act->PW << endl << endl;
		act = act->next;
	}

	cout << endl << endl;
	system("pause");
	return;
}

void dele(int d)
{
	node* act = head;
	while (act->nr != d) { act = act->next; }
	if (act->prev == nullptr) //del head
	{
		head = act->next;
		head->prev = nullptr;
		act->next = nullptr;
		free(act);
	}
	else if (act->next == nullptr) //del end
	{
		node* help = act->prev;
		act->prev = nullptr;
		help->next = nullptr;
		free(act);
	}
	else //del mitte
	{
		node* helpp = act->prev;
		node* helpn = act->next;
		act->prev = nullptr;
		act->next = nullptr;
		helpp->next = helpn;
		helpn->prev = helpp;
		free(act);
	}
	refreshnum();
	return;
}

void PWdel()
{
	system("cls");
	cout << "Passw\x94 \brter l\x94 \bschen" << endl<<endl;

	node* act = head;
	bool del = true;
	if (listLänge() == 0) { cout << "noch keine Passw\x94 \brter\n\n"; system("pause"); del = false; }
	while(del)
	{
		act = head;
		while (act->next != nullptr)
		{
			cout << "Nr.: " << act->nr << " " << act->PWnutzen << endl;
			act = act->next;
		}
		int d = 0; 
		bool h = true;
		
		while (h)
		{			
			cout << "l\x94 \bsche Passwort nummer: ";
			cin >> d;
			if (d > listLänge()) { cout << endl << "eingegebene Nummer ist nicht in Liste" << endl << endl; }
			else { h = false; }
		}
		node* help = head->next;
		dele(d);
		if (d == 1) { head = help; }

		if (listLänge() == 0)
		{
			system("cls");
			cout << "\nListe ist nun leer" << endl << endl; system("pause"); return;
		}
		else
		{
			cout << endl << endl << "aktuelle Liste:\n";

			act = head;

			while (act->next != nullptr)
			{
				cout << "Nr.: " << act->nr << " " << act->PWnutzen << endl;
				act = act->next;
			}

			cout << endl << "\nnoch eins l\x94 \bschen? J/N : "; char a; cin >> a;
			if (a == 'J' || a == 'j')
			{
				system("cls");
			}
			else
			{
				del = false;
			}
		}
		
	}
	return;
}

void speichern() //schreibt die Daten in die txt
{
	node* act = head;

	fstream dt;

	dt.open("dt.txt", ios::out);

	while (act->next != nullptr)
	{
		dt << act->PW << endl;
		dt << act->PWnutzen << endl;
		act = act->next;
	}
	dt.close();
	return;
}

void einlesen() //kreiert die doppelt verkettete Liste mit den Daten aus der txt
{
	node* act = head;

	fstream dt;
	dt.open("dt.txt", ios::in);
	ifstream readfile("dt.txt");
	ifstream readfile2("dt.txt");
	string dts;

	int n = 0;
	while (getline(readfile2, dts)) { n++; if (dts == "") { return;
	} }
	n = n / 2; 

	if (n == 0) { return; }
	act->nr = 1;

	getline(readfile, dts);
	act->PW = dts;

	getline(readfile, dts);
	act->PWnutzen = dts;

	node* help = act;
	act->next = new(node);
	act = act->next;
	act->prev = help;

	for (int i = 1; i < n; i++)
	{
		act->nr = act->prev->nr + 1;

		getline(readfile, dts);
		act->PW = dts;

		getline(readfile, dts);
		act->PWnutzen = dts;

		act->next = new(node);
		node* help = act;
		act = act->next;
		act->prev = help;
	}
	refreshnum();
	return;
}

void menue(node*head)
{
	system("cls");
	cout << "   Men\x81" << endl << endl
		 << "1: Passwort generieren" << endl
		 << "2: passw\x94 \brter ausgeben" << endl
		 << "3: Passw\x94 \brter l\x94 \bschen" << endl
		 << "4: beenden" << endl << endl;
	char E; 
	cout << "Eingabe :";
	cin >> E;
	switch (E)
	{
	case '1':PWgen(); break;
	case '2':PWread(); break;
	case '3':PWdel(); break;
	default: run = false; break;
	}
	return;
}

int main()
{
	einlesen();

	while (run)
	{
		menue(head);
	}
	speichern(); //kann man sicher auch noch woanders platziert werden um Datenverlust beim "unsachgemäßen" Schließen des Programmes zu verhindern
	return 0;
}
