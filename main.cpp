///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_March_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <cstdlib>  // For EXIT_SUCCESS / EXIT_FAILURE
#include <cassert>  // For assert()
#include <cstring>  // For strcmp()
#include <exception>  // For try/catch blocks
#include "catDatabase.h"
#include "addCat.h"
#include "reportCats.h"
#include "deleteCats.h"
#include "config.h"
//#define DEBUG
/// @internal Used to test the largest possible name
#define MAX_NAME1    "1234567890123456789012345678901234567890123456789"

/// @internal Used to test an illegal name (because it's too large by
///           one character)
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"

//copied for testing purposes
using namespace std;

extern int numberOfCats;

int main(){
    cout << "Starting " << PROGRAM_TITLE << endl ;
    initializeDatabase();

    bool result ;
    result = addCat( new catClass( "Loki", MALE, PERSIAN, 1.0 )) ;
    assert( result ) ;
    //if( !result ) throw logic_error (PROGRAM_TITLE ": addCat() failed" ) ;
    result = addCat( new catClass( "Milo", MALE, MANX , 1.1 )) ;
    assert( result ) ;
    result = addCat( new catClass( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    assert( result ) ;
    result = addCat( new catClass( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    assert( result ) ;
    result = addCat( new catClass( "Trin", FEMALE, MANX, 1.4 )) ;
    assert( result ) ;
    result = addCat( new catClass( "Chili", MALE, SHORTHAIR, 1.5 )) ;
    assert( result ) ;
    result = addCat( new catClass( "Garfield", MALE, SHORTHAIR, 200000 )) ;
    assert( result ) ;

#ifdef DEBUG
    result = addCat( new catClass( MAX_NAME1, MALE, SHORTHAIR, 1.5 )) ;//works
    assert(result);
    result = addCat( new catClass( "JOHN", MALE, SHORTHAIR, -1)) ; //no worky
    assert(result);
    result = addCat( new catClass( ILLEGAL_NAME, MALE, SHORTHAIR, 1.5 )) ; //no worky
    assert(result);
#endif

    printAllCats() ;

    deleteAllCats() ;

    printAllCats() ;

    cout << "Done with " << PROGRAM_TITLE ;

    return( EXIT_SUCCESS ) ;
}

