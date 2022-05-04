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
#ifdef DEBUG
    Cat temp = Cat("Nick", ColorType::BLACK, true, GenderType ::MALE, 1.0);
    Cat temp2 = Cat("Christ", ColorType::BLACK, true, GenderType::MALE, 1.2);
    if(temp.getWeight() == temp2.getWeight()){
        assert(false);
    }
#endif
    catDB.push_front( new Cat( "Loki", ColorType::CREAM, true, GenderType::MALE, 1.0 ) ) ;
    catDB.push_front( new Cat( "Milo", ColorType::BLACK, true, GenderType::MALE, 1.1 ) ) ;
    catDB.push_front( new Cat( "Bella", ColorType::BROWN, true, GenderType::FEMALE, 1.2 ) ) ;
    catDB.push_front( new Cat( "Kali", ColorType::CALICO, true, GenderType::FEMALE, 1.3 ) ) ;
    catDB.push_front( new Cat( "Trin", ColorType::WHITE, true, GenderType::FEMALE, 1.4 ) ) ;
    catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true,
                                                   GenderType::MALE, 1.5 ) );

    for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal =
                                                                                     (Animal*)List::get_next( (Node*)pAnimal ) ) {
        cout << pAnimal->speak() << endl;
    }

    assert(catDB.isSorted());
    catDB.validate() ;
    catDB.dump() ;
    catDB.deleteAllNodes() ;
    catDB.dump() ;
    cout << "Done with " << PROGRAM_TITLE ;
    return( EXIT_SUCCESS ) ;
}

