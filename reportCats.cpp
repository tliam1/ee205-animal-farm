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

extern struct cat cats[];
extern int numberOfCats;

void printCat(unsigned long index){
    if (strlen(cats[index].name)==0 || index < 0){
        fprintf(stdout, "%s: Bad cat [%lu]\n", REPORT, index);
    }else{
        printf("cat index = [%lu] name = [%s], gender=[%s], breed=[%s], isFixed[%d], weight=[%f], collarColor1=[%s], collarColor2=[%s], license=[%llu]\n", index, cats[index].name, catGenderName(cats[index].genders), catBreedName(cats[index].breeds), cats[index].isFixed, cats[index].weight, collarColorName(cats[index].collarColor1), collarColorName(cats[index].collarColor2), cats[index].license);
    }
    return;
}

void printAllCats(){
    for(int i=0; i < MAX_CAT_NAME; i++){
        if (strlen(cats[i].name) != 0)
            printf("[%s] ", cats[i].name);
    }
    printf("\n");
    return;
}


int findCat(char catName[]){
    for ( int i = 0; i < MAX_CATS; i++ )
    {
        if (strcmp( cats[i].name, catName ) == 0){
            return i;
        }
    }
    exit(0);
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
    return "/0";  //=null
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
    return "/0";   //error
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
    return "/0";
}
