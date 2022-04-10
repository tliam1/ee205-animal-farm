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
#define DEBUG

extern numCats numberOfCats;
extern class catClass* catDatabaseHeadPointer;

/*void printCat(unsigned long index){
    if (strlen(cats[index].name)==0 || index < 0){
        fprintf(stdout, "%s: Bad cat [%lu]\n", REPORT, index);
    }else{
        printf("cat index = [%lu] name = [%s], gender=[%s], breed=[%s], isFixed[%d], weight=[%f], collarColor1=[%s], collarColor2=[%s], license=[%llu]\n", index, cats[index].name, catGenderName(cats[index].genders), catBreedName(cats[index].breeds), cats[index].isFixed, cats[index].weight, collarColorName(cats[index].collarColor1), collarColorName(cats[index].collarColor2), cats[index].license);
    }
    return;
}
 */
//@todo might want us to do this later, think about process

void printAllCats(){
    if(!dataValidation()){
        std::cout<< "our data is compromised" << std::endl;
        return;
    }

    //while the cat does not equal the null pointer, start from head and move down the list
    for(catClass* cat = catDatabaseHeadPointer; cat != nullptr; cat = cat->next){
        cat->printName();
    }
}


catClass* findCat(const char catName[]){
    if(!catClass().validateName(catName)){
        return nullptr; //no cat with this name
    }
    for(catClass* cat = catDatabaseHeadPointer; cat != nullptr; cat = cat->next){
        if(strcmp(catName, cat->getCatName()) == 0){
            return cat; //we found our cat!!!
        }
    }

    return nullptr; //no cat found

}

const char* collarColorName(const collarColor colorName){
    switch (colorName){
        case BLACK:
            return ("Black"); //do this and ignore local var. Returning local vars is a no no
        case WHITE:
            return ("White");
        case RED:
            return ("Red");
        case BLUE:
            return ("Blue");
        case GREEN:
            return ("Green");
        case PINK:
            return ("Pink");
        default:  return "/0";  //null
    }
#ifdef DEBUG
    //removed debug as I removed the local variable
#endif
    //return "/0";  //=null
}

const char* catBreedName(const BreedType breedName){
    switch(breedName){
        case UNKNOWN_BREED:
            return ("Unknown Breed");
        case MAINE_COON:
            return ("Maine Coon");
        case MANX:
            return ("Manx");
        case SHORTHAIR:
            return ("Shorthair");
        case PERSIAN:
            return ("Persian");
        case SPHYNX:
            return ("Sphynx");
        default: return "/0";
    }
    //return "/0";   //error
}

const char* catGenderName(const GenderType genderName){
    switch(genderName){
        case UNKNOWN_GENDER:
            return ("Unknown Breed");
        case MALE:
            return ("Male");
        case FEMALE:
            return ("Female");
        default: return "/0";
    }
    //return "/0";
}
