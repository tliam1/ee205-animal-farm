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
#include <iostream>
#include <cstring>
#include <cassert>  // For assert()
#include "config.h"
#include "catClass.h"
#include "reportCats.h"

//class catClass* catDatabaseHeadPointer; CREATES MULTIPLE INSTANCES ERRORS IF CALLED HERE!!!!!!!!!!
//int numberOfCats = 0; moved to database.c for now

struct cat { //@todo remove after refactoring
    char name [MAX_CAT_NAME];
    bool isFixed;
    catWeight weight;
    unsigned long long license;

    BreedType breeds;
    GenderType genders;
    collarColor collarColor1;
    collarColor collarColor2;
};


void initializeDatabase();
bool securityCheckCat(const class catClass* catToCheck);
bool dataValidation();
