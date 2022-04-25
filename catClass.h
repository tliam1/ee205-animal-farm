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
#include "config.h"
using  namespace std;
class catClass {
public:
    catClass();

    catClass(const string newName, GenderType gender, BreedType newBreed, catWeight newWeight);

    string getCatName() const;

    void setCatName(const string newName);

    GenderType getGender() const;

    void setGender(GenderType newGender);

    BreedType getBreed() const;

    void setBreed(BreedType newBreed);

    catWeight getWeight() const;

    void setWeight(catWeight weight);

    virtual ~catClass();

    void printName();

    bool validate();
    static bool validateName(const string newCatName);
    static bool validateGender(const GenderType newGender);
    static bool validateBreed(const BreedType newBreed);
    static bool validateWeight(const catWeight newWeight);
    // @todo license number update + update collar color 1 & 2 // and assigning (this doesnt seem to be in spec, but should do it)

private:
    string catName; //name (empty at default)
    GenderType gender; //gender (unknown at default)
    BreedType breed; // breed (Unknown at default)
    bool isFixed = false; // false at default
    catWeight weight; // unknown at default (-1)
public:
    catClass* next;
};


