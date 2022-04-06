///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab-08d-animal-farm-1-to-clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#define MAX_CATS 1024
#define MAX_CAT_NAME 50
#define DEFAULT_WEIGHT -1
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "config.h"
#include "catClass.h"


//int numberOfCats = 0; moved to database.c for now

struct cat {
    char name [MAX_CAT_NAME];
    bool isFixed;
    catWeight weight;
    unsigned long long license;

    BreedType breeds;
    GenderType genders;
    collarColor collarColor1;
    collarColor collarColor2;
};



//extern char name [MAX_CATS][MAX_CAT_NAME];

//typedef enum {UNKNOWN_GENDER, MALE, FEMALE} GenderType;
//typedef enum {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX} BreedType;

//extern bool isFixed [MAX_CATS];
//extern float weight [MAX_CATS];
//extern int numberOfCats;

//extern BreedType breeds[MAX_CATS];
//extern GenderType genders[MAX_CATS];

void initializeNumCats();
bool securityCheckCat(catWeight cWeight, const char cName[]);

