#ifndef HW4_SPHERE_H
#define HW4_SPHERE_H

#include "ThreeDimensionalShape.h"

class sphere : public ThreeDimensionalShape{
public:
    explicit sphere() : ThreeDimensionalShape() {};
};

std::ostream& operator<<(std::ostream& stream, const sphere& shape);

#endif //HW4_SPHERE_H
