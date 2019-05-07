#ifndef HW4_SQUARE_H
#define HW4_SQUARE_H

#include "TwoDimensionalShape.h"

class square :public TwoDimensionalShape{
public:
    square(double a, double x=0, double y=0) : TwoDimensionalShape(a,x,y){};
};

std::ostream& operator<<(std::ostream& stream, const square& shape);

#endif //HW4_SQUARE_H
