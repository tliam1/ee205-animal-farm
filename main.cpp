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
#include "Animal.h"
#include "Mammal.h"
#include "Cat.h"
#include "SinglyLinkedList.h"
#include "List.h"
#include "Node.h"
#include "config.h"
//#define DEBUG


//copied for testing purposes
using namespace std;


int main(){
    cout << "Starting " << PROGRAM_TITLE << endl ;
    SinglyLinkedList catDB ;
    catDB.push_front( new Cat( "Loki", Color::CREAM, true, MALE, 1.0 ) ) ;
    catDB.push_front( new Cat( "Milo", Color::BLACK, true, MALE, 1.1 ) ) ;
    catDB.push_front( new Cat( "Bella", Color::BROWN, true, FEMALE, 1.2 ) ) ;
    catDB.push_front( new Cat( "Kali", Color::CALICO, true, FEMALE, 1.3 ) ) ;
    catDB.push_front( new Cat( "Trin", Color::WHITE, true, FEMALE, 1.4 ) ) ;
    /*catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true,
                                                   MALE, 1.5 ) );
                                                   */
    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal =
                                                                                     (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
    }
    catDB.validate() ;
    catDB.dump() ;
    catDB.deleteAllNodes() ;
    catDB.dump() ;
    cout << "Done with " << PROGRAM_TITLE ;
    return( EXIT_SUCCESS ) ;
}

