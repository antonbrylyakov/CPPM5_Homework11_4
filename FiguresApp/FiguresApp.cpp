#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoScelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"
#include "FigureUtils.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	Triangle triangle(10, 20, 30, 50, 60, 70);
	RightTriangle rightTriangle(10, 20, 30, 50, 60);
	IsoScelesTriangle isoScelesTriangle(10, 20, 50, 60);
	EquilateralTriangle equilateralTriangle(30);
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhombus rhombus(30, 30, 40);

	FigureUtils::printInfo(&triangle);
	FigureUtils::printInfo(&rightTriangle);
	FigureUtils::printInfo(&isoScelesTriangle);
	FigureUtils::printInfo(&equilateralTriangle);
	FigureUtils::printInfo(&quadrangle);
	FigureUtils::printInfo(&rectangle);
	FigureUtils::printInfo(&square);
	FigureUtils::printInfo(&parallelogram);
	FigureUtils::printInfo(&rhombus);

}