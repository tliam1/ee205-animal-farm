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
#define PROGRAM_TITLE "Animal Farm 2"
/// Print =====================
#define PRINT_HEADING_FOR_DUMP \
 /* Print =========================================================== */ \
 std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl

/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member ) \
 std::cout << std::setfill( ' ' ) /* Space pad */ \
 << std::left /* Left justify */ \
 << std::boolalpha /* Print `true` or `false` for `bool`s */ \
 << std::setw(8) << (className) \
 << std::setw(20) << (member) \
 << std::setw(52) /* (data) */


typedef float catWeight;
typedef int numCats;
typedef enum {UNKNOWN_GENDER, MALE, FEMALE} GenderType; //@todo create a enum class
typedef enum {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX} BreedType;
typedef enum {BLACK, WHITE, RED, BLUE, GREEN, PINK} collarColor;

enum class Color{
   UNKNOWN_COLOR,
   WHITE,
   BLACK,
   MIX  //these are just examples for now
};