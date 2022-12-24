#include<cstdlib>
#include<iostream>

using namespace std;

/*singly linked lists*/

class StringNode{
    private:
        string elem;
        StringNode* next;
    friend class StringLinkedList;
};



