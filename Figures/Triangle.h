#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	FIGURES_API Triangle(double a, double b, double c, double A, double B, double C);

	FIGURES_API double geta();

	FIGURES_API double getb();

	FIGURES_API double getc();

	FIGURES_API double getA();

	FIGURES_API double getB();

	FIGURES_API double getC();

protected:
	FIGURES_API void printSideInfo() override;

	FIGURES_API void printAngleInfo() override;

private:
	double _a, _b, _c, _A, _B, _C;
};
