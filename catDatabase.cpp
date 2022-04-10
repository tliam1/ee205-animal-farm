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
class catClass* catDatabaseHeadPointer = nullptr;

numCats numberOfCats = 0;
void initializeDatabase(){
    //numberOfCats = 0;
    assert(catDatabaseHeadPointer == nullptr);
    assert(dataValidation());
}

bool securityCheckCat(const class catClass* catToCheck){
   /* if (catToCheck == nullptr){
        std::cout << "There is no cat here..." << std::endl;
        return false;//end program//
    }
    */
    assert(catToCheck != nullptr);
   /* if (!dataValidation()) {//data is not valid
        std::cout << "There is no cat here" << std::endl;
        return false;//end program//
    }
    */
    assert(dataValidation());
    //while the cat does not equal the null pointer, start from head and move down the list
    for(catClass* cat = catDatabaseHeadPointer; cat != nullptr; cat = cat->next){
        if(cat == catToCheck){
            return true; //we found our cat!!!
        }
    }

    assert(dataValidation());
    return false; //we never found our cat :C
}

bool dataValidation(){

    int validatedCats = 0;
    //while the cat does not equal the null pointer, start from head and move down the list
    for(catClass* cat = catDatabaseHeadPointer; cat != nullptr; cat = cat->next){
        //we want to make sure the cat has valid values
        if(!cat->validate()){
            std::cout<<"invalid cat info @data validation line 55" << std::endl;
            return false;
        }
        catClass* duplicateCat = findCat(cat->getCatName());
        if (duplicateCat != cat) //so if there is one already in the list
        {
            std::cout<<"duplicate cat @data validation line 61 :C"<<std::endl;
            return false;
        }
        //check if the cat has a dup name
        validatedCats++;
    }

    //if number of cats is  not equal to the number of validated cats then return false
    /*if (numberOfCats != validatedCats)
        return false;
        */
    assert(numberOfCats == validatedCats);
    //else return true / good data
    return true;
}
