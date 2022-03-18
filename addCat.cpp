///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCat.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_March_2022
///////////////////////////////////////////////////////////////////////////////

#include "addCat.h"
//#define DEBUG
extern struct cat cats[];
extern int numberOfCats;

int addCat(char catName[], GenderType gender, BreedType breed, bool fixed, float catWeight,
           collarColor color1, collarColor color2, unsigned long long licenseNum){
#ifdef DEBUG
    printf("Name: %s, ", catName);
   printf("Gender: %s ", gender);
   printf("Breed: %d, ", breed);
   printf("Is fixed? %d, ", fixed);
   printf("CatWeight: %f, ", catWeight);
   printf("Collar Color: %d, ", color1);
   printf("Collar Color2: %d, ", color2);
   printf("License Number: %llu\n", licenseNum);
#endif

    if (securityCheckCat(catWeight, catName) == 0){
        return 0; //0 = failed
    }

    cats[numberOfCats].isFixed = fixed;
    strcpy(cats[numberOfCats].name, catName);
    cats[numberOfCats].breeds = breed;
    cats[numberOfCats].genders = gender;
    cats[numberOfCats].weight = catWeight;
    cats[numberOfCats].collarColor1 = color1;
    cats[numberOfCats].collarColor2 = color2;
    cats[numberOfCats].license = licenseNum;
//everything here works and this basically tells how we can set and delete names for the rest of this lab.

#ifdef DEBUG
    for (int i = 0; i <= numberOfCats; i++){
      printf("Stored cat is fixed? %d\n", cats[i].isFixed);
      printf("Stored cat name: %s\n", cats[i].name);
   }
#endif
    return numberOfCats++; //if returned the increment of number of cats then we are good to go
}
