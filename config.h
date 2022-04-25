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
#include <cstring>
#include <iostream>
#include <cassert>
#define PROGRAM_TITLE "Animal Farm 2"
/// Print =====================
#define PRINT_HEADING_FOR_DUMP \
 /* Print =========================================================== */ \
 cout << setw(80) << setfill( '=' ) << "" << endl

/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member ) \
 cout << setfill( ' ' ) /* Space pad */ \
 << left /* Left justify */ \
 << boolalpha /* Print `true` or `false` for `bool`s */ \
 << setw(8) << (className) \
 << setw(20) << (member) \
 << setw(52) /* (data) */

using namespace std;

typedef float catWeight;
typedef int numCats;
typedef enum {UNKNOWN_GENDER, MALE, FEMALE} GenderType;
typedef enum {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX} BreedType;
//typedef enum {BLACK, WHITE, RED, BLUE, GREEN, PINK} collarColor;

//@todo create a enum class (LAST THEY ARENT WORKING RIGHT)

typedef enum class Color{
   UNKNOWN_COLOR,
   WHITE,
   BLACK,
   CREAM,
   BROWN,
   CALICO,
   GINGER
}ColorType;


/*inline std::ostream& operator<<( std::ostream& lhs_stream, const ColorType& rhs_Gender ){ //cant get this working & don't know how to call it
    switch( rhs_Gender ) {
        case ColorType::UNKNOWN_COLOR:
            lhs_stream << "Unknown gender";
            break;
        case ColorType::WHITE:
            lhs_stream << "White";
            break;
        case ColorType::BLACK:
            lhs_stream << "Black";
            break;
        case ColorType::CREAM:
            lhs_stream << "Cream";
            break;
        case ColorType::BROWN:
            lhs_stream << "Brown";
            break;
        case ColorType::CALICO:
            lhs_stream << "Calico";
            break;
        case ColorType::GINGER:
            lhs_stream << "Ginger";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_TITLE ": Gender not mapped to a string" );
    }
    return lhs_stream;
}
 */