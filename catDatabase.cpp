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
class catClass* catDatabaseHeadPointer;

numCats numberOfCats = 0;
void initializeDatabase(){
    //numberOfCats = 0;
    if (catDatabaseHeadPointer != nullptr){
        std::cout << "Database still exists (Should end program)" << std::endl;
    }

}

bool securityCheckCat(const class catClass* catToCheck){
    if (catToCheck == nullptr){
        std::cout << "There is no cat here..." << std::endl;
        return false;//end program
    }
    if (!dataValidation()) {//data is not valid
        std::cout << "There is no cat here" << std::endl;
        return false;//end program
    }
    //while the cat does not equal the null pointer, start from head and move down the list
    for(catClass* cat = catDatabaseHeadPointer; cat != nullptr; cat = cat->next){
        if(cat == catToCheck){
            return true; //we found our cat!!!
        }
    }

    if (!dataValidation()) {//data is not valid
        std::cout << "There is no cat here" << std::endl;
        return false; //end program
    }
    return false; //we never found our cat :C //end program
}

bool dataValidation(){

    int validatedCats = 0;
    //while the cat does not equal the null pointer, start from head and move down the list
    for(catClass* cat = catDatabaseHeadPointer; cat != nullptr; cat = cat->next){
        //we want to validate the cat (using class validate function)
        //check if the cat has a dup name

        validatedCats++;
    }

    //if number of cats is  not equal to the number of validated cats then return false
    if (numberOfCats != validatedCats)
        return false;
    //else return true
    return true;

    return true;
}
