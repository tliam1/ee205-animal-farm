///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include <cassert>
using namespace std;
class Weight {

//vars
public:
    typedef enum { POUND, KILO, SLUG } UnitOfWeight ;
    static const float UNKNOWN_WEIGHT;
    static const float POUND_IN_A_KILO;
    static const float POUND_IN_A_SLUG;
    static const string POUND_LABEL;
    static const string KILO_LABEL;
    static const string SLUG_LABEL;
    static float globalWeight; //remove later

    friend class Animal;


private:
    bool weightIsKnown = false;
    UnitOfWeight unitOfWeight = POUND; //once set cant change (not initialization though)
    float maxWeight = UNKNOWN_WEIGHT; //cant change once set
    bool hasMaxWeight = false;
    float weight = UNKNOWN_WEIGHT; //can change once set


//methods
public:
    //constructors (7)
    Weight() noexcept;
    explicit Weight(float newWeight);
    explicit Weight(UnitOfWeight newUnitOfWeight) noexcept;
    Weight(float newWeight, UnitOfWeight newUnitOfWeight);
    Weight(float newWeight, float newMaxWeight);
    Weight(UnitOfWeight newUnitOfWeight, float newMaxWeight);
    Weight(float newWeight, UnitOfWeight newUnitOfWeight, float newMaxUnitOfWeight);

    //getters and setters
    float getMaxWeight() const noexcept;
    UnitOfWeight  getWeightUnit() const noexcept;
    float getWeight(UnitOfWeight) noexcept;
    void setWeight(float newWeight);
    void setWeight(float newWeight, UnitOfWeight weightUnits);
    //static methods
    static float fromKilogramToPound( float kilogram ) noexcept;
    static float fromSlugToPound( float slug ) noexcept;
    static float fromPoundToKilogram( float pound ) noexcept;
    static float fromPoundToSlug( float pound ) noexcept;
    float convertWeight( float fromWeight
            ,UnitOfWeight fromUnit
            ,UnitOfWeight toUnit ) noexcept;

    //checks/other methods
    bool validate(float weightToValidate) const noexcept;
    bool isWeightValid(float checkWeight) const;
    void dump() const;
    bool operator==(Weight& rhs_Weight);
    bool operator+=(float rhs_addToWeight);
    bool operator<(Weight& rhs_Weight);


private:

//
//
};

