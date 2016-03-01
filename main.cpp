#include "printToCoord.h++"
#include <iostream>

using namespace PRETZEL;

int main()
{
    PrintToCoord a1;

    a1.setWindow(10,10);
    a1.addStr( "------------", 0, 2, PrintToCoord::alignLeft);
    a1.addStr( "hello", 2, 2, PrintToCoord::alignLeft);
    a1.addStr( "123456789_123456789_123456789", -2, 3, PrintToCoord::alignLeft);

    a1.addStr( "-------------------------------", 0,5, PrintToCoord::alignLeft);
    a1.addStr( "left", 4,5, PrintToCoord::alignRight);
    a1.addStr( "right", 5,5, PrintToCoord::alignLeft);
    std::cout << a1 ;    
    //a1.print();
    return EXIT_SUCCESS;
}
