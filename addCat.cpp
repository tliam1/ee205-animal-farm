///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCat.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_March_2022
///////////////////////////////////////////////////////////////////////////////

#include "addCat.h"
//#define DEBUG
extern class catClass* catDatabaseHeadPointer;
extern struct cat cats[];
extern numCats numberOfCats;
//add a cat obj into database(linked list)
bool addCat(class catClass* newCat){
   /* if (newCat == nullptr){
        return false;
    }
    */
    assert(newCat != nullptr); //assert(); makes life easy and saves space!!!!
    newCat -> validate();

  /*  if (!dataValidation()){
        //end program cat is no good
        return false;
    }
    */

    assert(dataValidation());


    numberOfCats++; //if database is good, and newcat != null then cat is good
    //note -> is space sensitive, you cannot have white space before/after... learned that the hard way
    newCat->next = catDatabaseHeadPointer; // assign the new nodes next position to the old head
    catDatabaseHeadPointer = newCat; //reassign the head pointer (reassign next pointer of old node first)

   /* if (!dataValidation()){   //if the linked list isnt valid after adding the new cat, fail (something went terribly wrong)
        //end program
        return false;
    }
    */
    assert(dataValidation()); //assert(dataValidation()); makes life easy and saves space!!!!
    return true;
}
