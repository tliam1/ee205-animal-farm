///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Mammal.h"

Mammal::Mammal(const float newMaxWeight, const string &newSpecies) {

}

Mammal::Mammal(const ColorType newColor, const GenderType newGender, float newWeight, const float newMaxWeight,
               const string newSpecies) {

}

ColorType Mammal::getColor() const noexcept {
    return ColorType::BLACK;
}

void Mammal::setColor(const ColorType newColor) noexcept {

}

void Mammal::dump() const noexcept {
    Animal::dump();
}
