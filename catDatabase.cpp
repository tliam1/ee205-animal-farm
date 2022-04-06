///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab-08d-animal-farm-1-to-clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"

struct cat cats [MAX_CATS];
/*bool isFixed [MAX_CATS];
float weight [MAX_CATS];
int numberOfCats = 0;
char name [MAX_CATS][MAX_CAT_NAME];
BreedType breeds[MAX_CATS];
GenderType genders[MAX_CATS];
*/

numCats numberOfCats;
void initializeNumCats(){
    numberOfCats = 0;
}

bool securityCheckCat(catWeight cWeight, const char cName[]){
    if (cWeight <= 0){
        fprintf(stdout, "%s: Illegal Cat Info!\n", ADD);
        return 0; //0 = false
    }else if (strlen(cName)==0){
        fprintf(stdout, "%s: Illegal Cat Info!\n", ADD);
        return 0; //0 = false

    }else if (strlen(cName) > MAX_CAT_NAME){
        fprintf(stdout, "%s: Illegal Cat Info!\n", ADD);
        return 0; //0 = false

    }else if (numberOfCats > MAX_CATS){
        fprintf(stdout, "%s: Illegal Cat Info!\n", ADD);
        return 0; //0 = false
    }



    for ( int i = 0; i < MAX_CATS; i++ )
    {
        if ( strcmp( cats[i].name, cName ) == 0 )
        {
            fprintf(stdout, "%s: Cat name %s is already in the database.\n", ADD, cName);
            return 0;
        }
    }

    return 1; //true
}
