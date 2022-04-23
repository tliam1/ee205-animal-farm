///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "updateCats.h"

extern struct cat cats[];
extern numCats numberOfCats;

bool updateCatName(unsigned long index, const char newName[]){

  /*  if (strlen(newName) > MAX_CAT_NAME)
        return 0;
    else if (strlen(newName) == 0)
        return 0;

    for (int i = 0; i < MAX_CAT_NAME; i++){
        if (strcmp( cats[i].name, newName ) == 0){
            fprintf(stdout, "%s: Name [%s] already in database\n", UPDATE, newName);
            return 0; // false (consistant throughout script)
        }
    }
    if (index < 0 && index > MAX_CATS)
        return 0; //false

    strcpy(cats[index].name, newName);
    */
    return 1; //true
}

bool fixCat(unsigned long index){
    if (index < 0 && index > numberOfCats)
        return 0;

   // cats[index].isFixed = true;
    return 1;
}

bool updateCatWeight(unsigned long index, catWeight newWeight){

    if (newWeight <= 0)
        return 0;

    //cats[index].animalWeight = newWeight;
    return 1;
}

void updateCatCollar1(unsigned long index, collarColor newCollarCol){
    //cats[index].collarColor1 = newCollarCol;
}

void updateCatCollar2(unsigned long index, collarColor newCollarCol){
   // cats[index].collarColor2 = newCollarCol;
}

void updateLicense(unsigned long index, unsigned long long newLicense){
    //cats[index].license = newLicense;
}
