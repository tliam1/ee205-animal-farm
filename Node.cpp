///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"

void Node::dump() const {
PRINT_HEADING_FOR_DUMP;
FORMAT_LINE_FOR_DUMP(this, this->next);
}

bool Node::validate() const noexcept {
    if(next != this) {
        return true;
    }
    return false;
}

bool Node::operator>(const Node &rightSide) {
    return this > &rightSide;
}

bool Node::compareByAddress(const Node *node1, const Node *node2) {
    if(node1 > node2){
        return true; //compares memory addresses for some use not yet known to me
    }
    return false;
}
