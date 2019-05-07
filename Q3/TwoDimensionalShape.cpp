//
// Created by mohammad on 5/5/2019.
//

#include "TwoDimensionalShape.h"
TwoDimensionalShape::TwoDimensionalShape(double a, double x, double y) : parameter{a}{
    center=new double[2];
    center[0]=x;
    center[1]=y;
}

void TwoDimensionalShape::print() {
    std::cout << "Parameter is: " << parameter << std::endl;
    std::cout << "Center is: " << "( " << center[0] << " , " << center[1] << " )" << std::endl;
}