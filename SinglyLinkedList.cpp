///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   22_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() {
    if (headPointer != nullptr)
        deleteAllNodes();

    //@todo validate empty list
}

void SinglyLinkedList::push_front(Node *newNode) {
  //@todo validation
   /* assert(newCat != nullptr); //assert(); makes life easy and saves space!!!!
    newCat -> validate();
    assert(dataValidation());
    */
    nodeCount++; //if database is good, add node and increment count
    //note -> is space sensitive, you cannot have white space before/after... learned that the hard way
    newNode->next = headPointer; // assign the new nodes next position to the old head
    headPointer = newNode; //reassign the head pointer (reassign next pointer of old node first)

    //assert(dataValidation()); //assert(dataValidation()); makes life easy and saves space!!!!
    return;
}

Node *SinglyLinkedList::pop_front() noexcept {
    if (headPointer == nullptr)
        return nullptr;

    Node* tempNode = headPointer; // dont create temp node until after conditions
    headPointer = headPointer->next; //how do I delete the data that is there?
    delete(tempNode); // like this?
    return headPointer;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {

}

void SinglyLinkedList::dump() const noexcept {

}

bool SinglyLinkedList::validate() const noexcept {
    return false;
}
