#ifndef HW4_CIRCLE_H
#define HW4_CIRCLE_H

#include "TwoDimensionalShape.h"

class circle : public TwoDimensionalShape{
public:
    circle(double a, double x=0, double y=0) : TwoDimensionalShape(a,x,y){};
};

std::ostream& operator<<(std::ostream& stream, const circle& shape);

#endif //HW4_CIRCLE_H
