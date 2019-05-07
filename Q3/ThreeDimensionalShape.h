#ifndef HW4_THREEDIMENSIONALSHAPE_H
#define HW4_THREEDIMENSIONALSHAPE_H

#include "Shape.h"

class ThreeDimensionalShape: public Shape{
public:
    explicit ThreeDimensionalShape(double x=0.0,double y=0.0, double z=0.0);
    virtual double volume();
    virtual double area();
};

#endif //HW4_THREEDIMENSIONALSHAPE_H
