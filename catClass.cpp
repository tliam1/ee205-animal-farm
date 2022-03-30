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
    //will initialize data to null / defaults
    memset( catName, 0, MAX_CAT_NAME );
    isFixed = false;
    weight =  DEFAULT_WEIGHT;
    breed = UNKNOWN_BREED;
    gender = UNKNOWN_GENDER;
    next = nullptr;
}



catClass::catClass(char *newName, GenderType newGender, BreedType newBreed, catWeight newWeight) : catClass() {
    //sets the name,gender,etc if the info is given
    setGender(newGender);
    setWeight(newWeight);
    setBreed(newBreed);
    setWeight(newWeight);
}

const char *catClass::getCatName() const {
    return catName;
}
void catClass::setCatName(char* newName){
    //@todo validation
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
    catClass::weight = newWeight; //@todo validation
}

catClass::~catClass() {
    //sets things to null/defaults before deletion
    memset( catName, 0, MAX_CAT_NAME );
    isFixed = false;
    weight =  DEFAULT_WEIGHT;
    breed = UNKNOWN_BREED;
    gender = UNKNOWN_GENDER;
    next = nullptr;
}

bool catClass::validate() {
    if (validateName() && validateWeight() && validateBreed() && validateGender())
        return true; //all tests are good and the data is valid
    return false; //nope tests failed, this cat aint good no more
}
bool catClass::validateName() {
    if (catName == nullptr || strlen(catName) <= 0 || strlen(catName) >= MAX_CAT_NAME)
        return false;
    return true;
}
bool catClass::validateWeight() {
    if (weight <= 0)
        return false; //0 = false
    return true;
}
bool catClass::validateBreed() {
    if (breed == UNKNOWN_BREED)
        return false;
    return true;
}
bool catClass::validateGender() {
    if (gender == UNKNOWN_GENDER)
        return false;
    return true;
}




