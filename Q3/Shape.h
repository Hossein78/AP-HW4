#ifndef HW4_SHAPE_H
#define HW4_SHAPE_H

class Shape {
protected:
    Shape(double p) : parameter{p} {};
    double* center;
    double parameter;
public:
    virtual void print();
};
#endif //HW4_SHAPE_H