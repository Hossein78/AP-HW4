//
// Created by mohammad on 5/5/2019.
//

#include "ThreeDimensionalShape.h"

    explicit ThreeDimensionalShape::ThreeDimensionalShape(double x, double y, double z);
    this->center=new double[3];
    this->center[0]=x;
    this->center[1]=y;
    this->center[2]=z;
}

void ThreeDimensionalShape::print() {
    std::cout << "Parameter is: " << parameter << std::endl;
    std::cout << "Center is: " << "( " << center[0] << " , " << center[1] << " , " << center[2] << " )" << std::endl;
}