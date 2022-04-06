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
#include <stdio.h>
#include <stdbool.h>
#include "catDatabase.h"
#include "addCat.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "config.h"
#include <assert.h>
extern struct cat cats[];
extern int numberOfCats;

int main(){
    initializeDatabase();
    assert(addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) == numberOfCats - 1); //this is because we increment numOfCats after we return! Thanks Mark!
#ifdef DEBUG
    int test = addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 );
   printf("Return value of add cat 1 == %d", test);
   printf("Number of Cats: %d\n", numberOfCats);
#endif

    assert(addCat( "", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) == 0) ; //should fail
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;


    printAllCats();
    int kali = findCat( "Kali" );
    assert(updateCatName( kali, "Chili" ) == 0); // this should fail
    assert(updateCatName( kali, "" ) == 0); // this should fail
    assert(updateCatName( kali, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh" ) == 0); // this should fail

    printCat( kali );
    updateCatName( kali, "Capulet" );
    updateCatWeight( kali, 9.9 );
    updateCatCollar1(kali, GREEN);
    updateCatCollar2(kali, BLACK);
    updateLicense(kali, 100);
    fixCat( kali );
    printCat( kali );

#ifdef DEBUG   //this doesnt work... get this to work
    char* exampleCollarCol;
   exampleCollarCol = collarColorName(cats[0].collarColor1);
   printf("The collar color is %s\n", exampleCollarCol);
#endif

    printAllCats();
    deleteAllCats();
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    int Milo = findCat("Milo");
    assert(updateCatWeight( Milo, 9.9 ) == 1); //works
    printAllCats();

    return 0;
}

