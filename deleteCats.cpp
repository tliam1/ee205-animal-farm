///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "deleteCats.h"
extern struct cat cats[];
extern numCats numberOfCats;
extern class catClass* catDatabaseHeadPointer;


void deleteAllCats(){
    catClass* current = catDatabaseHeadPointer;
    catClass* next = NULL;

    while (current != NULL)
    {
        //moves down list deleting things one at a time
        //current starts at head then moves to its pointers next (assigned not next before current gets deleted and lost)
        next = current->next;
        delete(current);
        current = next;
    }

    catDatabaseHeadPointer = NULL;
}



void deleteCat(class catClass* targetCatForDeletion){
    if (targetCatForDeletion == nullptr){
        //there is no target
        std::cout << "No cat for deletion" << std::endl;
        return;
    }

    if (targetCatForDeletion == catDatabaseHeadPointer){ //we need to readjust the head
        catDatabaseHeadPointer = catDatabaseHeadPointer->next;
        //how do we remove the old one?
        //I looked at the source code...
        delete targetCatForDeletion;
        numberOfCats--;
        if(!dataValidation()){
            //@todo //end program because there are holes in linked list
            return;
        }
        return;
    }
    if(!dataValidation()){
        std::cout<< "our data is no longer good" << std::endl;
        return;
    }
    class catClass* cat = catDatabaseHeadPointer;
    while(cat != nullptr){
        if(cat->next == targetCatForDeletion){
            //we take next because we need a reference of the previous node to connect it with the node after target node
            cat->next == targetCatForDeletion->next;
            delete targetCatForDeletion;
            numberOfCats--;

            if(!dataValidation()){
               //@todo //end program because there are issues in linked list
               return;
            }
            return;
        }
        cat=cat->next;//keep trucking along list
    }

    return; //make this an error
    //@todo fail program, there is no cat in the database
}
