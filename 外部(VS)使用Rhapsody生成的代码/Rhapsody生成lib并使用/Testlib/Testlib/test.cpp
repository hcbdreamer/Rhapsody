#include"AccelerRometerClass.h"
#include<iostream>


int main()
{
	AccelerRometerClass A;
	A.GEN(evSetCount);
	//A.setCount(20);
	std::cout << A.getCount() << std::endl;
}