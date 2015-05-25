#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

template <typename T>
void printContents(std::vector<T> & vec, std::string const & message);
bool sortDescending(int i, int j);

int main(int argc, char **argv)
{
	const int arrLen = 20;
	std::vector<int> intVector;

	//fill vector
	for (int i = 0; i < arrLen; i++)
	{
		intVector.push_back(i);
	}

	printContents<int>(intVector, "Vector Contents");

	std::random_shuffle(intVector.begin(), intVector.end());
	printContents<int>(intVector, "Random Shuffle Vector Contents");

	std::sort(intVector.begin(), intVector.end(), sortDescending);
	printContents<int>(intVector, "Sorted Vector Contents");

	return 0;
}

template <typename T>
void printContents(std::vector<T> & vec, std::string const & message)
{
	std::cout << message << std::endl;
	for (std::vector<T>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

bool sortDescending(int i, int j)
{
	return i > j;
}