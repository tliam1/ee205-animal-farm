///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab-08d-animal-farm-1-to-clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"

struct cat cats [MAX_CATS];
class catClass* catDatabaseHeadPointer;

numCats numberOfCats = 0;
void initializeDatabase(){
    //numberOfCats = 0;
    if (catDatabaseHeadPointer != nullptr){

    }

}

bool securityCheckCat(const class catClass* catToCheck){
    return 1; //true
}

bool dataValidation(){
    return 1; //true
}
