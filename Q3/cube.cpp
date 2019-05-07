#include "cube.h"
#include <math.h>

std::ostream & cube::operator<<(std::ostream &stream, const cube& shape) {
    stream << "Cube side length = " << shape.parameter <<
           "center–>" << "( " << shape.center[0] << " , " << shape.center[1] << " , " << shape.center[2] <<" )" <<
           "area of" << shape.area() << "&" << "volume of" << shape.volume() << std::endl;
    return stream;
}

double cube::area() {
    return (6*std::pow(parameter,2));
}

double cube::volume() {
    return (std::pow(parameter,3));
}