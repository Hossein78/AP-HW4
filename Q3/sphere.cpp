#include "sphere.h"
#include <math.h>

std::ostream & sphere::operator<<(std::ostream &stream, const sphere& shape) {
    stream << "Sphere radius = " << shape.parameter <<
    "center–>" << "( " << shape.center[0] << " , " << shape.center[1] << " , " << shape.center[2] <<" )" <<
    "area of" << shape.area() << "&" << "volume of" << shape.volume() << std::endl;
    return stream;
}

double sphere::area() {
    return (4*3.14*std::pow(parameter,3));
}

double sphere::volume() {
    return  ((4/3)*3.14*std::pow(parameter,3));
}