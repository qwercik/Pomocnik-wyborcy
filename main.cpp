#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	cout<<"Wybory tuż, tuż, a ty nadal nie wiesz na kogo głosować?"<<endl;
	static string kandydat;
	switch(rand()%11){
		case 0: kandydat="Janusza Korwina-Mikke"; break;
		case 1: kandydat="Andrzeja Dudę"; break;
		case 2: kandydat="Pawła Kukiza"; break;
		case 3: kandydat="Bronisława Komorowskiego"; break;
		case 4: kandydat="Magdalenę Ogórek"; break;
		case 5: kandydat="Janusza Palikota"; break;
		case 6: kandydat="Grzegorza Brauna"; break;
		case 7: kandydat="Andrzeja Jarubasa"; break;
		case 8: kandydat="Pawła Tanajno"; break;
		case 9: kandydat="Mariana Kowalskiego"; break;
		case 10: kandydat="Jacka Wilka"; break;
	}
	cout<<"Głosuj na "<<kandydat<<"! To kandydat twoich marzen!";
	cin.get();
} 