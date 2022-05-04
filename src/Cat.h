///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Mammal.h"
#include "Node.h"

class Cat : public Mammal{
public:
    Cat(const string &newName);
    Cat(const string &newName, const ColorType newColor, const bool newIsFixed,
        const GenderType newGender, const float newWeight);
    string getName() const noexcept;
    void setName(const string &newName);
    bool isFixed() const noexcept;
    void fixCat() noexcept;
    string speak() const noexcept override;
    void dump() const noexcept override;
    bool validate() const noexcept override;

    bool validateName(const string &newName) const;
    inline static const string SPECIES_NAME = "Felis Catus";
    constexpr static const float MAX_WEIGHT = 40;

protected:
    string catName;
    bool isCatFixed = false;

};

