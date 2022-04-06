///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCat.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_March_2022
///////////////////////////////////////////////////////////////////////////////

#include "addCat.h"
//#define DEBUG
extern struct cat cats[];
extern numCats numberOfCats;

int addCat(class catClass* newCat){
    return numberOfCats++; //if returned the increment of number of cats then we are good to go
}
