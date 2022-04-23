///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCat.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_March_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include "catDatabase.h"
#include <stdio.h>
#include <string.h>
#include "config.h"
#include "catClass.h"
//int addCat(char name[], GenderType gender[], BreedType breed[], bool isFixed[], float animalWeight[]);
//add a new cat class OBJ
bool addCat(class catClass* newCat); //no longer returning num cats, can be used to check things instead

