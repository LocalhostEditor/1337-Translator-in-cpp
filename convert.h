#pragma once
#ifndef CONVERT
#define CONVERT
#include<iostream>
#include<stdio.h>
#include<Windows.h>
using namespace std;
void convert(char tmp[200]) //change this according to need  :) 
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 04);
	cout << "The Converted text : ";
	for (int i = 0;tmp[i] != EOF && tmp[i] != '\0';i++)
	{
		if (tmp[i] == 'c' || tmp[i] == 'd' || tmp[i] == 'f' || tmp[i] == 'g' || tmp[i] == 'h' || tmp[i] == 'j' || tmp[i] == 'k' || tmp[i] == 'n' || tmp[i] == 'm' || tmp[i] == 'p' || tmp[i] == 'q' || tmp[i] == 'r' || tmp[i] == 't' || tmp[i] == 'u' || tmp[i] == 'v' || tmp[i] == 'w' || tmp[i] == 'x' || tmp[i] == 'y' || tmp[i] == 'z' || tmp[i] == ' ' || tmp[i] == '1' || tmp[i] == '2' || tmp[i] == '3' || tmp[i] == '4' || tmp[i] == '5' || tmp[i] == '6' || tmp[i] == '7' || tmp[i] == '8' || tmp[i] == '9')
		{
			SetConsoleTextAttribute(color, 2);
			cout << tmp[i];
		}
		if (tmp[i] == 'a' || tmp[i] == 'A')
		{
			SetConsoleTextAttribute(color, 2);
			cout << 4;
		}
		if (tmp[i] == 'b' || tmp[i] == 'B')
		{
			SetConsoleTextAttribute(color, 2);
			cout << 8;
		}
		if (tmp[i] == 'e' || tmp[i] == 'E')
		{
			SetConsoleTextAttribute(color, 2);
			cout << 3;
		}
		if (tmp[i] == 'i' || tmp[i] == 'I')
		{
			SetConsoleTextAttribute(color, 2);
			cout << 1;
		}
		if (tmp[i] == 'l' || tmp[i] == 'L')
		{
			SetConsoleTextAttribute(color, 2);
			cout << 1;
		}
		if (tmp[i] == 'o' || tmp[i] == 'O')
		{
			SetConsoleTextAttribute(color, 2);
			cout << 0;
		}
		if (tmp[i] == 's' || tmp[i] == 'S')
		{
			SetConsoleTextAttribute(color, 2);
			cout << 5;
		}
	}
}
#endif
