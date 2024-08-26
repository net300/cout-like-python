#pragma once
#include <iostream>
class print
{
public:
	static void printint(const int* number)
	{
		std::cout << number << std::endl;
	}
	static void printchar(const char* str)
	{
		std::cout << str << std::endl;
	}
	 static void printfloat(const float* floatnumber)
	{
		std::cout << floatnumber << std::endl;
	}
	 static void printend()
	{
		std::cin.get();
	}
};

