#include "printToCoord.h++"

using namespace PRETZEL;

int main()
{
    PrintToCoord a1;

    a1.setWindow(10,10);
    a1.addStr( "------------", 0, 2, PrintToCoord::alignLeft);
    a1.addStr( "hello", 2, 2, PrintToCoord::alignLeft);
    a1.addStr( "123456789_123456789_123456789", -2, 3, PrintToCoord::alignLeft);
    a1.print();
    return EXIT_SUCCESS;
}
