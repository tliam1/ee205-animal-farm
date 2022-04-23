///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Liam Tapper <tliam@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "config.h"
#include <iostream>
#include <cstring>
#include <cassert>  // For assert()
#include <iomanip>

using namespace std;

class Node {
public:
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);

protected:
    friend class List;
    friend class SinglyLinkedList;
    static bool compareByAddress(const Node* node1, const Node* node2);
    Node* next = nullptr;

};


