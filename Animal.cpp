///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Animal.h"

Animal::Animal(const float newMaxWeight, const string &newClassification, const string &newSpecies) {
    assert(validateClassification(newClassification));
    assert(validateSpecies(newSpecies));
    animalWeight.maxWeight = newMaxWeight;
    animalWeight.hasMaxWeight = true;
    species = newSpecies;
    classification = newClassification;
    assert(validate());
}

Animal::Animal(const GenderType newGender, const float newWeight, const float newMaxWeight,
               const string &newClassification, const string &newSpecies) {
    assert(validateClassification(newClassification));
    assert(validateSpecies(newSpecies));
    animalWeight = Weight(newWeight, newMaxWeight);
    setGender(newGender);
    species = newSpecies;
    classification = newClassification;
    assert(validate());
}

string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

string Animal::getClassification() const noexcept {
    return classification;
}

string Animal::getSpecies() const noexcept {
    return species;
}

GenderType Animal::getGender() const noexcept {
    return gender;
}

float Animal::getWeight() const noexcept {
    return animalWeight.weight;
}

void Animal::setWeight(const float newWeight) {
    if(newWeight > 0 && newWeight < animalWeight.maxWeight)
        animalWeight.weight = newWeight;
    return;
}

void Animal::dump() const noexcept {
    Node::dump();
    validate();
    getGender(); //@todo figure out why this is in the call graph
}

bool Animal::validate() const noexcept {
    assert(animalWeight.validate(animalWeight.weight));
    assert(validateSpecies(getSpecies()));
    assert(validateClassification(getClassification()));
    assert(Node::validate());

    return true;
}

bool Animal::validateClassification(const string &checkClassification) noexcept {
    //bool noWhiteSpace = checkClassification.find_first_not_of(' ') != string::npos;
    if (checkClassification.empty() /*&& !noWhiteSpace*/) {
        cout << "Issues with Classification string" << endl;
        return false;
    }
    return true;
}

bool Animal::validateSpecies(const string &checkSpecies) noexcept {
    //bool noWhiteSpace = checkSpecies.find_first_not_of(' ') != string::npos;
    if (checkSpecies.empty() /*&& !noWhiteSpace*/) {
        cout << "Issues with species string" << endl;
        return false;
    }
    return true;
}

void Animal::setGender(const GenderType newGender) {
    if (gender == UNKNOWN_GENDER){
        gender = newGender;
    }

}

