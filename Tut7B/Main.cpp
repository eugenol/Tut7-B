#include <iostream>
#include <vector>


int main(int argc, char **argv)
{
	const int arrLen = 20;
	std::vector<int> intVector;

	//fill vector
	for (int i = 0; i < arrLen; i++)
	{
		intVector.push_back(i);
	}

	std::cout << "Vector Contents" << std::endl;
	for (int i = 0; i < arrLen; i++)
	{
		std::cout << intVector[i] << " ";
	}
	std::cout << std::endl;


}