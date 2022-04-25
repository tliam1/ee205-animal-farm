///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Animal.h"
class Mammal : public Animal {
public:
    Mammal(const float newMaxWeight, const string &newSpecies);
    Mammal (const ColorType newColor, const GenderType newGender, float newWeight,
            const float newMaxWeight, const string &newSpecies);


    ColorType getColor() const noexcept;
    void setColor(const ColorType newColor) noexcept;
    void dump() const noexcept override;

    inline static const string MAMMAL_NAME = "Mammalian";
protected:
    ColorType color = ColorType::UNKNOWN_COLOR;
};

