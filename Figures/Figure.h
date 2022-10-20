#pragma once
#include <iostream>

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

class Figure
{
public:
	FIGURES_API Figure();

	FIGURES_API std::string& getName();

	FIGURES_API unsigned int getSideCount();

	FIGURES_API void printString();

protected:
	std::string _name;
	unsigned int _sideCount = 0;

	FIGURES_API virtual void printSideInfo();

	FIGURES_API virtual void printAngleInfo();
};