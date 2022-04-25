///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Weight.h"
#include "config.h"
#include "Node.h"
using namespace std;
class Animal : public Node{
public:
    Animal(const float newMaxWeight, const string &newClassification,
           const string &newSpecies);
    Animal(const GenderType newGender, const float newWeight, const float newMaxWeight,
           const string &newClassification, const string &newSpecies);

    string getKingdom() const noexcept;
    string getClassification() const noexcept;
    string getSpecies() const noexcept;
    GenderType getGender() const noexcept;
    float getWeight() const noexcept;
    void setWeight(const float newWeight);
    virtual string speak() const noexcept=0;
    void dump() const noexcept override;
    bool validate() const noexcept override;

    static bool validateClassification(const string &checkClassification) noexcept;
    static bool validateSpecies(const string &checkSpecies) noexcept;

    const string KINGDOM_NAME = "Animalia";

protected:
    void setGender(const GenderType newGender);

private:
    string species;
    string classification;
    GenderType gender = UNKNOWN_GENDER;
    Weight animalWeight; //This somehow gets overridden by other classes

};


