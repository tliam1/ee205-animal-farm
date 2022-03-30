///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catClass.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   29_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "config.h"
#include "catDatabase.h"

class catClass {
public:
    catClass();

    catClass(char *newName, GenderType gender, BreedType newBreed, catWeight newWeight);

    const char *getCatName() const;

    void setCatName(char* newName);

    GenderType getGender() const;

    void setGender(GenderType newGender);

    BreedType getBreed() const;

    void setBreed(BreedType newBreed);

    catWeight getWeight() const;

    void setWeight(catWeight weight);

    virtual ~catClass();

    void print();

    bool validate();
    bool validateName();
    bool validateGender();
    bool validateBreed();
    bool validateWeight();

private:
    char catName[MAX_CAT_NAME]; //name (empty at default)
    GenderType gender; //gender (unknown at default)
    BreedType breed; // breed (Unknown at default)
    bool isFixed; // false at default
    catWeight weight; // unknown at default (-1)
public:
    catClass* next;
};


