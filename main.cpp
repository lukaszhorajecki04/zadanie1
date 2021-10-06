#include <iostream>
#include <fstream>
using namespace std;
ofstream MyFile;

	string imie, nazwisko, rok_ur;
	int main(){
	
	cout<<"\nPodaj imie\t";
	cin>>imie;
	cout<<"\nPodaj nazwisko \t";
	cin>>nazwisko;
	cout<<"\nPodaj rok urodzenia\t";
	cin>>rok_ur;

    MyFile.open("dane.txt");
    MyFile <<imie<<" "<<nazwisko<<" "<<rok_ur;
    MyFile.close();
    
class Uczen{
	public:
		string imie, nazwisko, klasa, rok_ur;
		void uczen::ustawImie(string=pImie){
			imie=pImie
		}
		void uczen::ustawNazwisko(string=pNazwisko){
			nazwisko=pNazwisko
		}
		void uczen::ustawKlase(string=pKlasa){
			klasa=pKlasa
		}
		void uczen::ustawRokUr(string=pRokUr){
			rok_ur=pRokUr
		}
		void wyswietl_dane(){
			cout<<"Dane ucznia"<<imie<<" "<<nazwisko<<" "<<klasa<<" "<<rok_ur<<endl;
		}
};
inny.uczen;
uczen1.ustawImie("John");
uczen1.ustawNazwisko("Doe");
uczen1.ustawEmail(uczen.imie, uczen.nazwisko);
ucze.wyswietlDane()
;
}
	return 0;
}


















	
	
