///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"
#include "config.h"
// all should be used in cat class which kinda condenses, but everything remains related
bool updateCatName(unsigned long index, const char newName[]);
bool fixCat(unsigned long index);
bool updateCatWeight(unsigned long index, catWeight newWeight);
void updateCatCollar1(unsigned long index, collarColor newCollarCol);
void updateCatCollar2(unsigned long index, collarColor newCollarCol);
void updateLicense(unsigned long index, unsigned long long newLicense);

