#include "circle.h"
#include <math.h>

std::ostream & circle::operator<<(std::ostream &stream, const circle& shape) {
    stream << "Circle radius = " << shape.parameter <<
           "center–>" << "( " << shape.center[0] << " , " << shape.center[1] << " )" <<
           "area of" << shape.area() << std::endl;
}

double circle::area() {
    return (3.14*std::pow(parameter,2));
}