// 04.11.2020 classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>
#include "Cat.h"
#include "Man.h"

#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main()
{
	Cat c;
	c.Birthday = 20201104;
	strcpy (c.Nickname, "Barsik");
	c.Weight = 3.5;

	Cat c2;
	c2.Birthday = 20201004;
	strcpy(c2.Nickname, "Persik");
	c.Weight = 4.2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
