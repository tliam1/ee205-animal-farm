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
    assert(validate());
}

void SinglyLinkedList::push_front(Node *newNode) {
    assert(validate());
    nodeCount++; //if database is good, add node and increment count
    //note -> is space sensitive, you cannot have white space before/after... learned that the hard way
    newNode->next = headPointer; // assign the new nodes next position to the old head
    headPointer = newNode; //reassign the head pointer (reassign next pointer of old node first)
    assert(validate());
    return;
}

Node *SinglyLinkedList::pop_front() noexcept {
    if (headPointer == nullptr)
        return nullptr;

    assert(validate());
    Node* tempNode = headPointer; // dont create temp node until after conditions
    headPointer = headPointer->next; //how do I delete the data that is there?
    delete(tempNode); // like this?
    nodeCount--;
    headPointer->dump();
    assert(validate());

    return headPointer;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {

    if (isIn(newNode) || !isIn(currentNode) || empty()){
        //logic error
        return;
    }
    if (newNode == nullptr || currentNode == nullptr){
        //invalid argument
        return;
    }
    //list is good

    if (currentNode == headPointer){
        //push front
        push_front(newNode);
        return;
    }
    assert(validate());
    newNode = headPointer;
    while (newNode->next != currentNode){
        newNode = newNode->next;
    }
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    nodeCount++;
    newNode->dump();
    return;
    assert(validate());
    //do the placing
}

void SinglyLinkedList::dump() const noexcept {
    for(Node* tempNode = headPointer; tempNode != nullptr; tempNode = tempNode->next){
        tempNode->dump();
    }
}

bool SinglyLinkedList::validate() const noexcept {
    int nodeCheck = 0;
    for(Node* tempNode = headPointer; tempNode != nullptr; tempNode = tempNode->next){
        if (!tempNode->validate()){
            cout << "Node loops into itself" << endl;
            return false;
        }
        nodeCheck++;
    }
    if(size() != nodeCheck) {
        cout << "Node count is off" << endl;
        return false;
    }

    if(empty() && headPointer != nullptr){
        return false;
    }



    return true;
}
