///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab-08d-animal-farm-1-to-clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#define MAIN "main.c"
#define DATA "catDatabase.c"
#define REMOVE "deletecats.c"
#define UPDATE "updateCats.c"
#define ADD "addcats.c"
#define PROGRAM_TITLE "Animal Farm 2"
#define REPORT "reportCats.c"

typedef float catWeight;
typedef int numCats;
typedef enum {UNKNOWN_GENDER, MALE, FEMALE} GenderType;
typedef enum {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX} BreedType;
typedef enum {BLACK, WHITE, RED, BLUE, GREEN, PINK} collarColor;