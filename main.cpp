#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "Wybory tuż, tuż, a ty nadal nie wiesz na kogo głosować?\n";
	std::string yourCandidate;

	switch(rand() % 11)
	{
		case 0: yourCandidate = "Janusza Korwina-Mikke"; break;
		case 1: yourCandidate = "Andrzeja Dudę"; break;
		case 2: yourCandidate = "Pawła Kukiza"; break;
		case 3: yourCandidate = "Bronisława Komorowskiego"; break;
		case 4: yourCandidate = "Magdalenę Ogórek"; break;
		case 5: yourCandidate = "Janusza Palikota"; break;
		case 6: yourCandidate = "Grzegorza Brauna"; break;
		case 7: yourCandidate = "Andrzeja Jarubasa"; break;
		case 8: yourCandidate = "Pawła Tanajno"; break;
		case 9: yourCandidate = "Mariana Kowalskiego"; break;
		case 10: yourCandidate = "Jacka Wilka"; break;
	}
	
	yourCandidate = "Eryka Andrzejewskiego"; //Troll ;)

	std::cout << "Głosuj na " << yourCandidate << "! To kandydat twoich marzeń!\n";
} 
