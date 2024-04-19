#pragma once
#include <string>
#include <list>
#include "Queue.h"

class TreeNode
{
    string& medicareId; // unique identifier cannot be duplicated
    int directContacts = 0; // no. of children a node has, default 0
    int totalCases = 1; // no. of nodes rooted at this tree node including self
    TreeNode* parentPtr; // pointer to the parent node
    std::list<TreeNode*> directContactsPtrList; // list of pointers to children nodes
};