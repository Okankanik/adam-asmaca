#include <iostream>
#include <clocale>
#include <string>
using namespace std;

string kullanici1, kullanici2, kelime, gizlikelime;
char tahmin;
int yanlis = 0;

int main()
{
	setlocale(LC_ALL, "Turkish");

	cout << "----/ ADAM ASMACA OYUNUMUZA HOSGELDINIZ /----" << endl;
	cout << endl;
	cout << endl;

	cout << "birinci oyuncunun ismi = " << " "; cin >> kullanici1;
	cout << "ikinci oyuncunun ismi = " << " "; cin >> kullanici2;

	cout << kullanici1 << " " << "lutfen" << " " << kullanici2 << " " << " kisinin tahmin edecegi bir kelime giriniz = " << endl;
	cin >> kelime ;

	while (gizlikelime.size() != kelime.size())
	{
		gizlikelime.push_back('?');                   //gizli kelime kelimeye esit olmadýgý sürece ? kalsin kelime yerine.
	}
	
	for (int i = 0; i <= 30; i++)
	{
		cout << endl;                                // kelimeyi aldiktan sonra 30 satir bosluk istedim kelime gorunmesin diye.
	}
	
	cout << "// GIRILEN KELIME GOZUKMESIN DIYE BOSLUK BIRAKILDI // " << endl;    // 2. kullanici bosluga sasirmasin diye bildiri.

	do
	{
		cout << "bulunan harfler = " << " " << gizlikelime << endl;          //gizli  kelime bulunmasi istenen kelime
		cout << "tahmininizi giriniz = " << " "; cin >> tahmin;              //gizli  kelimeyi tahmin ettiðimiz bolum

		int x = kelime.length();                                  //kelimenin uzunlugu ne kadar.
		for (int i = 0; i < x; i++)                           // 0'dan baslayip girilen kelime harf sayisina kadar devam etsin.
		{
			if (tahmin == kelime[i])                         //i kelime sayisi kadar teker teker artacak ; tahminde kelimedeki harfleri aricak esitse-
			{
				gizlikelime[i] = tahmin;                    // gizli kelimede edilen tahmine eþittir.
				yanlis--;                                   // her dogru tahminde yanlis hakki azalsin
			}
		}
		yanlis++;                        // aksi tahminde yanlis hakki artsin (12'ye kadar)

		if (gizlikelime == kelime)                 //tahmin kelimesi eþitse girilen kelimeye oyunu kazansin
		{
			cout << "*** OYUNU KAZANDINIZ ***" << endl;
			break;
		}

			if (yanlis == 1)
			{
				cout << "                \n";
				cout << "                \n";
				cout << "                \n";                      //yanlis arttýkca asilan adam resmi cizilsin 
				cout << "                \n";
				cout << "                \n";
				cout << "                \n";
				cout << " __             \n";
			}
			else if (yanlis == 2)
			{
				cout << "                \n";
				cout << "                \n";
				cout << "                \n";
				cout << "                \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 3)
			{
				cout << "                \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 4)
			{
				cout << " __             \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 5)
			{
				cout << " ________       \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 6)
			{
				cout << " ________       \n";
				cout << "|      ( )      \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 7)
			{
				cout << " ________       \n";
				cout << "|      ( )      \n";
				cout << "|       |       \n";
				cout << "|       |       \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 8)
			{
				cout << " ________       \n";
				cout << "|      ( )      \n";
				cout << "|       |       \n";
				cout << "|       |       \n";
				cout << "|       |       \n";
				cout << "|       |       \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 9)
			{
				cout << " ________       \n";
				cout << "|      ( )      \n";
				cout << "|       |       \n";
				cout << "|      /|       \n";
				cout << "|       |       \n";
				cout << "|       |       \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 10)
			{
				cout << " ________       \n";
				cout << "|      ( )      \n";
				cout << "|       |       \n";
				cout << "|      /|\\     \n";
				cout << "|       |       \n";
				cout << "|       |       \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 11)
			{
				cout << " ________       \n";
				cout << "|      ( )      \n";
				cout << "|       |       \n";
				cout << "|      /|\\     \n";
				cout << "|       |       \n";
				cout << "|      /|       \n";
				cout << "|               \n";
				cout << "|__             \n";
			}
			else if (yanlis == 12)
			{
				cout << " ________       \n";
				cout << "|      ( )      \n";
				cout << "|       |       \n";
				cout << "|      /|\\     \n";
				cout << "|       |       \n";
				cout << "|      / \\     \n";
				cout << "|               \n";
				cout << "|__             \n";

				cout << "Oyunu kaybettiniz :(" << endl;
				cout << "Kelime: " << kelime;
				};


	} while (yanlis < 12);                            //yanlýþ girilen harf veya kelime sayýsý 12 kereden fazla olamaz 12 olunca dur demek.
	
	return 0;
}