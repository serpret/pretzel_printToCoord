#include "printToCoord.h++"
#include <iostream>

namespace PRETZEL
{
    using std::string;
    using std::cout;
    using std::endl;

    //=====================================================================
    //=====================================================================
    void PrintToCoord::setWindow( int cols, int rows)
    {
        string emptyStr = "";

        windowRows = rows;
        windowCols = cols;

        //make sure we have the right amount of rows
        while( windowRows > strRows.size()) strRows.push_back( emptyStr); 
        while( windowRows < strRows.size()) strRows.pop_back(); 

       
        //make sure the strings have the right amount of columns
        // we do this so that we valid element access later 
        for( auto iter = strRows.rbegin(); iter != strRows.rend(); ++iter){
            while( windowCols > iter->size()) iter->push_back(' ');
            while( windowCols < iter->size()) iter->pop_back();
        }
    }
    //=====================================================================
    //=====================================================================


    //=====================================================================
    //=====================================================================
    void PrintToCoord::addStr(string str, int col, int row, AlignType alignment)
    {
        int strInd = 0;
        int startCol;

        if (  0 <= row && row <= windowRows){
            if( alignment == alignLeft){
                for( auto curCol = col;  
                     curCol <= windowCols && strInd < str.size();
                     ++curCol                                )
                {
                    if( 0 <= curCol) strRows[row][curCol] = str[strInd];
                    ++strInd;   
                }
                
            } else {
                //startCol = col-str.size(); 
            }
        }
    }
    //=====================================================================
    //=====================================================================


    //=====================================================================
    //=====================================================================
    void PrintToCoord::print()
    {
        for( auto iter = strRows.rbegin(); iter != strRows.rend(); ++iter){
            cout << *iter << endl;
        }
    }
    //=====================================================================
    //=====================================================================
}
