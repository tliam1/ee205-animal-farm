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



catClass::catClass(const char *newName, GenderType newGender, BreedType newBreed, catWeight newWeight) : catClass() {
    //sets the name,gender,etc if the info is given
    setCatName(newName);
    setGender(newGender);
    setWeight(newWeight);
    setBreed(newBreed);
    assert(dataValidation());
}

const char *catClass::getCatName() const {
    return catName;
}
void catClass::setCatName(const char* newName){
    assert(validateName(newName));
    memset(catName, 0, MAX_CAT_NAME);
    strcpy(catName, newName);
    std::cout<<"Cat name is: " << catName << std::endl;
}

GenderType catClass::getGender() const {
    return gender;
}

void catClass::setGender(GenderType newGender) {
    assert(validateGender(newGender));
    catClass::gender = newGender;
}

BreedType catClass::getBreed() const {
    return breed;
}

void catClass::setBreed(BreedType newBreed) {
    assert(validateBreed(newBreed));
    catClass::breed = newBreed;
}

catWeight catClass::getWeight() const {
    return weight;
}

void catClass::setWeight(catWeight newWeight) {
    assert(validateWeight(newWeight));
    catClass::weight = newWeight;
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
    if (validateName(catName) && validateWeight(weight) && validateBreed(breed) && validateGender(gender))
        return true; //all tests are good and the data is valid

    std::cout<<"Invalid Name"<<std::endl;
    assert(false);
}
bool catClass::validateName(const char newCatName[]) {
    if (newCatName == nullptr || strlen(newCatName) <= 0 || strlen(newCatName) >= MAX_CAT_NAME){
        std::cout<< "validate name failed" << std::endl;
        return false;
    }
        return true;
}
bool catClass::validateWeight(const catWeight newWeight) {
    if (newWeight <= 0) {
        std::cout<< "validate Weigh failed" << std::endl;
        return false;
    }
    return true;
}
bool catClass::validateBreed(const BreedType newBreed) {
    if (newBreed == UNKNOWN_BREED) {
        std::cout<< "validate breed failed" << std::endl;
        return false;
    }
    return true;
}
bool catClass::validateGender(const GenderType newGender) {
    if (newGender == UNKNOWN_GENDER) {
        std::cout<< "validate gender failed" << std::endl;
        return false;
    }
    return true;
}

void catClass::printName() {
    std::cout << catName << std::endl;
}


