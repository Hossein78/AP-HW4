#include <iostream>

#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"

using std::cout;

int main()
{
    //square sqr( 12, 2, 2 );
    sphere sph{3.4};
    std::cout << sph.volume() << std::endl;
    //cube cub( 2.2 );
    //circle cir( 3.5, 6, 9 );
    //Shape *ptr[ 4 ] = { &cir, &sqr, &sph, &cub };

    /*for ( int x = 0; x < 4; ++x ) {
        cout << '\n';
        ptr[x]->print();
    }*/
    return 0;
}