#ifndef HW4_TWODIMENSIONALSHAPE_H
#define HW4_TWODIMENSIONALSHAPE_H

#include "Shape.h"

class TwoDimensionalShape : public Shape {
public:
    TwoDimensionalShape(double a, double x=0, double y=0);
    virtual double area();
};
#endif //HW4_TWODIMENSIONALSHAPE_H
