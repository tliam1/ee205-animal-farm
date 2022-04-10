///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <stdbool.h>
#include "catDatabase.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "catClass.h"

void printCat(unsigned long);
void printAllCats();
catClass* findCat(const char catName[]);
const char* collarColorName(const collarColor colorName);
const char* catBreedName(const BreedType breedName);
const char* catGenderName(const GenderType genderName);
