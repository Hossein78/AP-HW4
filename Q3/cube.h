#ifndef HW4_CUBE_H
#define HW4_CUBE_H

#include "ThreeDimensionalShape.h"

class cube : public ThreeDimensionalShape{

};

std::ostream& operator<<(std::ostream& stream, const cube& shape);

#endif //HW4_CUBE_H
