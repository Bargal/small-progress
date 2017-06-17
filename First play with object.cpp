// 
//

#include "stdafx.h"
#include <iostream>
#include <string>

void inputString(std::string & name, std::string & surname, std::string & about, int & age , int i);
void outputString(std::string & name, std::string & surname, std::string & about, int & age, int i);
void outputString(std::string & name, std::string  & surname, std::string & about, int & age);
void outputString(std::string & name, std::string & surname, std::string & about);


int main()
{
  
	std::string name[2];
	std::string surname[2];
	std::string about[2];
	int age[2];

	for (int i = 0; i < 2; i++)
		inputString(name[i], surname[i], about [i], age[i], i);

	for (int i = 0; i < 2; i++)
		outputString(name[i], surname[i], about[i], age[i], i);

	for (int i = 0; i < 2; i++)
	outputString(name [i], surname[i], about[i], age[i]);

	for (int i = 0; i < 2; i++)
		outputString(name[i], surname[i], about[i]);

}


void inputString(std::string & name, std::string & surname, std::string & about, int & age, int i)
{
	std::cout << "Enter the first name and surname of the person number " << i+1 << std:: endl;
	std::cin >> name;
	std::cin >> surname;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << " Write something about " << name << " " << surname << std::endl;
	std::getline(std::cin, about);

	std::cout << "Enter age of the person number " << i+1 << std::endl;
	
	bool test;
	do
	{
		std::cin >> age;
		test = std::cin.fail();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (test);
}


void outputString(std::string & name, std::string & surname, std::string & about, int & age, int i)
{
	std::cout << "\nfirst name person number " << i+1 << " is " << name << std::endl;
	std::cout << name << "'s surname is "<< surname << std::endl;
	std::cout << name <<" "<<surname << " is " << age << " years old " << std::endl;
}


void outputString(std::string & name, std::string & surname, std::string & about, int & age)

{

	std::cout << "\nYou wrote about " << name << " : " << about << std::endl;
	std::cout << "\nthe lenght of the " << name << "'s information is " <<about.size() << " letters" << std::endl;
}


void outputString(std::string & name, std::string & surname, std::string & about)
{
	size_t fName = about.find(name);
	size_t fSurname = about.find(surname);

	std::cout << std::endl << name <<" "<<  surname <<" ";

	if (fName != std::string::npos && fSurname != std::string::npos)
	{
		std::cout << "In the information about yourself you gave your name and surname " << std::endl;
		return;
	}

	if (fName == std::string::npos && fSurname == std::string::npos)
	{
		std::cout << "In the information about yourself you did not give your name and surname " << std::endl;
		return;
	}


	if (fName != std::string::npos)
		std::cout << "In the information about yourself you gave your name " << std::endl;
	else
		std::cout << "In the information about yourself you did not give your name " << std::endl;

	if (fSurname != std::string::npos)
		std::cout << "In the information about yourself you gave your surname " << std::endl;
	else
		std::cout << "In the information about yourself you did not give your surname " << std::endl;



}

