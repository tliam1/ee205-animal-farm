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
//will initialize data
}

catClass::catClass(char *newName, GenderType newGender, BreedType newBreed, catWeight newWeight) : catClass() {
    setGender(newGender);
    setWeight(newWeight);
    setBreed(newBreed);
    setWeight(newWeight);

}

const char *catClass::getCatName() const {
    return catName;
}
void catClass::setCatName(char* newName){
    memset(catName, 0, MAX_CAT_NAME);
    strcpy(catName, newName);
}

GenderType catClass::getGender() const {
    return gender;
}

void catClass::setGender(GenderType newGender) {
    catClass::gender = newGender;
}

BreedType catClass::getBreed() const {
    return breed;
}

void catClass::setBreed(BreedType newBreed) {
    catClass::breed = newBreed;
}

catWeight catClass::getWeight() const {
    return weight;
}

void catClass::setWeight(catWeight newWeight) {
    catClass::weight = newWeight;
}




