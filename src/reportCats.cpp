///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "reportCats.h"
//#define DEBUG

const string catBreedName(const BreedType breedName){
    switch(breedName){
        case BreedType::UNKNOWN_BREED:
            return ("Unknown Breed");
        case BreedType::MAINE_COON:
            return ("Maine Coon");
        case BreedType::MANX:
            return ("Manx");
        case BreedType::SHORTHAIR:
            return ("Shorthair");
        case BreedType::PERSIAN:
            return ("Persian");
        case BreedType::SPHYNX:
            return ("Sphynx");
        default: return "/0";
    }
    //return "/0";   //error
}

const string catGenderName(const GenderType genderName){
    switch(genderName){
        case GenderType::UNKNOWN_GENDER:
            return ("Unknown Breed");
        case GenderType::MALE:
            return ("Male");
        case GenderType::FEMALE:
            return ("Female");
        default: return "/0";
    }
    //return "/0";
}

const string catColorName(const ColorType colorName) {
    switch( colorName ) {
        case ColorType::UNKNOWN_COLOR:
            return "Unknown gender";
        case ColorType::WHITE:
            return "White";
        case ColorType::BLACK:
            return "Black";
        case ColorType::CREAM:
            return "Cream";
        case ColorType::BROWN:
            return "Brown";
        case ColorType::CALICO:
            return "Calico";
        case ColorType::GINGER:
            return "Ginger";
        default:
            cout << "Not a valid Gender" << endl;
            assert(false);

    }
}
