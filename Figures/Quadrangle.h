#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
	FIGURES_API Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

	FIGURES_API double geta();

	FIGURES_API double getb();

	FIGURES_API double getc();

	FIGURES_API double getd();

	FIGURES_API double getA();

	FIGURES_API double getB();

	FIGURES_API double getC();

	FIGURES_API double getD();

protected:
	FIGURES_API virtual void printSideInfo();

	FIGURES_API virtual void printAngleInfo();

private:
	double _a, _b, _c, _d, _A, _B, _C, _D;
};


