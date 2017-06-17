// 
//

#include "stdafx.h"
#include <iostream>
#include <string>

void inputString(std::string name[], std::string surname[], int age[]);
void outputString(std::string name[], std::string surname[], int age[]);



int main()
{
  
	std::string name[2];
	std::string surname[2];
	int age[2];

	for (int i = 0; i < 2; i++)
		inputString(name[i], surname[i], age[i]);

	for (int i = 0; i < 2; i++)
		outputString(name[i], surname[i], age[i]);

}


void inputString(std::string name[], std::string surname[], int age[])
{

}


void outputString(std::string name[], std::string surname[], int age[])
{

}