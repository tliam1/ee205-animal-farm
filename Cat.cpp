///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Cat.h"

Cat::Cat(const string &newName) : Mammal(MAX_WEIGHT, SPECIES_NAME) {
    assert(validateName(newName));
    catName = newName;
    validate();
}

Cat::Cat(const string &newName, const ColorType newColor, const bool newIsFixed, const GenderType newGender,
         const float newWeight) : Mammal(newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME){
    assert(validateName(newName));
    isCatFixed = newIsFixed;
    catName = newName;
    validate();
}

string Cat::getName() const noexcept {
    return catName;
}

void Cat::setName(const string &newName) {
    if(validateName(newName)){
        catName = newName;
    }
    return;
}

bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

void Cat::fixCat() noexcept {
    if(!isCatFixed)
        isCatFixed = true;
    return;
}

string Cat::speak() const noexcept {
    return "Meow";
}

void Cat::dump() const noexcept {
    validate();
    Mammal::dump();
    cout<< boolalpha << catName << "\t" << isCatFixed << endl;
    //why do we call is fixed here?
}

bool Cat::validate() const noexcept {
    if (Animal::validate() && validateName(getName())){
        return true;
    }
    return false;
}

bool Cat::validateName(const string &newName) const {
    //bool noWhiteSpace = checkClassification.find_first_not_of(' ') != string::npos;
    if (newName.empty() /*&& !noWhiteSpace*/ && newName != getName()) {
        cout << "Issues with Classification string" << endl;
        return false;
    }
    return true;
}
