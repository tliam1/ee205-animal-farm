///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "deleteCats.h"
extern struct cat cats[];
extern numCats numberOfCats;
void deleteAllCats(){
    for (int i = 0; i < MAX_CATS; i++){
        cats[i].isFixed = false;
        cats[i].weight = 0;
        memset(cats[i].name,0,strlen(cats[i].name));
    }
    numberOfCats=0;
    //strcpy(name[i], "");
    //memset(name,0,strlen(name));
}
