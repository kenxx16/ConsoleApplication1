// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	fstream file;
	file.open("C://Users/kenx/Documents/file.txt");

	string name[10] = { "Василий","Кирилл","Андрей","Анна","Дарья",
						"Владимир","Антон","Алексей","Анастасия","Екатерина" };	
	
	int age[10] = { 19, 20, 19, 21, 21, 19, 18, 24, 20, 20 };
	
	for (int i=0; i<10; i++)
	{
		file  << name[i] << "," << age[i] << endl;
	}
	
	file.close();
		
	system("pause");
	return 0;
}


