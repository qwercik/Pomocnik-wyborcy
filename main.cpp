#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <random>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Niepoprawne użycie programu.\n"
				  << "Użyj: " << argv[0] << " plik_z_kandydatami\n"; 
		return 1;
	}

	std::string candidatesFilename = argv[1];	

	std::ifstream file(candidatesFilename);
	if (!file.is_open())
	{
		std::cerr << "Nie udało się wczytać pliku z listą kandydatów (" << candidatesFilename << ").\n";
		return 1;
	}	
	
	std::vector<std::string> candidatesList;
	std::string candidate;
	
	while (std::getline(file, candidate))
		candidatesList.push_back(candidate);
	
	
	std::mt19937 rng;
	rng.seed(std::random_device()());
	std::uniform_int_distribution<std::mt19937::result_type> dist(0, candidatesList.size() - 1);
	
	int randomIndex = dist(rng);

	std::cout << "Wybory tuż, tuż, a ty nadal nie wiesz na kogo głosować?\n";
	std::cout << "Głosuj na " << candidatesList[randomIndex] << "! To kandydat twoich marzeń!\n";

	return 0;
} 
