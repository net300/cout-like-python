#pragma once
#include <iostream>
class print
{
public:
	static void printint(int number)
	{
		std::cout << number;
	}
	static void printchar(const char* str)
	{
		std::cout << str;
	}
	static void printfloat(float floatnumber)
	{
		std::cout << floatnumber;
	}
	static void printend()
	{
		std::cin.get();
	}
	static void returnline()
	{
		std::cout<<std::endl;
	} 
};

