///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catClass.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   29_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catClass.h"

catClass::catClass() {
 //this will initialize data
}

catClass::catClass(char *newName, GenderType newGender, BreedType newBreed, catWeight newWeight) : catClass() {
    newGender = getGender();
    newName = getCatName();
    newBreed = getBreed();
    newWeight = getWeight();
}

char *catClass::getCatName() {
    return catName;
}

GenderType catClass::getGender() const {
    return gender;
}

void catClass::setGender(GenderType gender) {
    catClass::gender = gender;
}

BreedType catClass::getBreed() const {
    return breed;
}

void catClass::setBreed(BreedType breed) {
    catClass::breed = breed;
}

catWeight catClass::getWeight() const {
    return weight;
}

void catClass::setWeight(catWeight weight) {
    catClass::weight = weight;
}



