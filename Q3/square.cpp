#include "square.h"
#include <math.h>

std::ostream & square::operator<<(std::ostream &stream, const square& shape) {
    stream << "square side length = " << shape.parameter <<
           "center–>" << "( " << shape.center[0] << " , " << shape.center[1] << " )" <<
           "area of" << shape.area() << std::endl;
}

double square::area() {
    return (std::pow(parameter,2));
}