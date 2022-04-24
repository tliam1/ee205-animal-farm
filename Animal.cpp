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
  //  assert(validateClassification(newClassification));
   // assert(validateSpecies(newSpecies));
    cout<< "MaxWeight: " << newMaxWeight<<endl;
    animalWeight->maxWeight = newMaxWeight;
    animalWeight->hasMaxWeight = true;
    species = newSpecies;
    classification = newClassification;
    assert(validate());
}

Animal::Animal(const GenderType newGender, const float newWeight, const float newMaxWeight,
               const string &newClassification, const string &newSpecies) {
  //  assert(validateClassification(newClassification));
  //  assert(validateSpecies(newSpecies));
    cout<< "curWeight (SHOULD BE -1): " << animalWeight->weight << endl;
    animalWeight = new Weight (newWeight, newMaxWeight); //@todo overrides other classes instance???
    cout<< "curWeight: " << animalWeight->weight << endl;
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
    return animalWeight->weight;
}

void Animal::setWeight(const float newWeight) {
    if(newWeight > 0 && newWeight < animalWeight->maxWeight)
        animalWeight->weight = newWeight;
    return;
}

void Animal::dump() const noexcept {
    Node::dump();
    validate();
    FORMAT_LINE_FOR_DUMP("Animal", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Kingdom") << getKingdom() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Classification") << getClassification() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "species") << getSpecies() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Gender") << getGender() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Weight") << getWeight() << endl;
}

bool Animal::validate() const noexcept {
    assert(animalWeight->validate(animalWeight->weight));
   // assert(validateSpecies(getSpecies()));
    //assert(validateClassification(getClassification()));
    assert(Node::validate());

    return true;
}

bool Animal::validateClassification(const string &checkClassification) noexcept {
    //bool noWhiteSpace = checkClassification.find_first_not_of(' ') != string::npos;
    if (checkClassification.empty() /*&& !noWhiteSpace*/) {
        cout << "Issues with Classification string: " << checkClassification << endl;
        return false;
    }
    return true;
}

bool Animal::validateSpecies(const string &checkSpecies) noexcept {
    //bool noWhiteSpace = checkSpecies.find_first_not_of(' ') != string::npos;
    if (checkSpecies.empty() /*&& !noWhiteSpace*/) {
        cout << "Issues with species string: " << checkSpecies <<endl;
        return false;
    }
    return true;
}

void Animal::setGender(const GenderType newGender) {
    if (gender == UNKNOWN_GENDER){
        gender = newGender;
    }

}

