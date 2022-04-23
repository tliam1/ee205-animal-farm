///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"

bool List::empty() const noexcept {
    if (headPointer == nullptr)
        return true;
    return false;
}

unsigned int List::size() const noexcept {
    return nodeCount; //some count of the nodes
}

bool List::isIn(Node *aNode) const {
    //@todo validation
    for(Node* tempNode = headPointer; tempNode != nullptr; tempNode = tempNode->next){
        if(aNode == tempNode){
            cout << "is In = true" << endl;
            return true; //we found our node!!!
            //@todo Check to make sure this works. I don't know yet
        }
    }
    return false;
}

bool List::isSorted() const noexcept {
    for (Node *tempNode = headPointer; tempNode->next != nullptr; tempNode = tempNode->next) {
        if (!tempNode->operator>(*tempNode->next)){
            cout<<"UNSORTED DATA"<<endl;
            return false;
            //@todo testing
        }
    }

    return true;
}

Node *List::get_first() const noexcept {
    if (headPointer != nullptr)
        return headPointer;

    return nullptr;
}

void List::deleteAllNodes() noexcept {
    //@todo validation
    Node* current = headPointer;
    Node* next = nullptr;

    while (current != nullptr)
    {
        //moves down list deleting things one at a time
        //current starts at head then moves to its pointers next (assigned not next before current gets deleted and lost)
        next = current->next;
        delete(current);
        current = next;

    }

    headPointer = nullptr;
    nodeCount = 0; //forgot this
    std::cout << "deleted all cats" << std::endl;
    return;
}

Node *List::get_next(const Node *currentNode) {
    if (currentNode->next != nullptr)
        return currentNode->next;

    return nullptr; //@todo throw an invalid argument
}
