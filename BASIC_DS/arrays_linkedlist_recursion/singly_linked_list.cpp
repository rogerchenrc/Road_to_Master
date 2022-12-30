#include<cstdlib>
#include<iostream>

using namespace std;

/*singly linked lists*/

class StringNode{
    private:
        string elem;
        StringNode* next; //pointer to point to another node
    friend class StringLinkedList;
};

class StringLinkedList{
    public:
        StringLinkedList();
        ~StringLinkedList(); //Desctructor
        bool empty() const;
        const string &front ()const; //const at the back means read only  - not modifying
        void addFront(const string& e);
        void removeFront();

    private:
        StringNode* head;
};

//**********what???
StringLinkedList::StringLinkedList():head(NULL){} //Constructor with one colon means initialization of head to null

StringLinkedList::~StringLinkedList(){
    while(!empty()){
        removeFront();
    }
}

bool StringLinkedList::empty() const{
    return head == NULL;
}

const string& StringLinkedList::front() const{
    return head->elem;
}

/*----Add to front of the list----*/
void StringLinkedList::addFront(const string&  e){
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

void StringLinkedList::removeFront(){
    StringNode * old = head;
    head = old->next;
    delete old;
}
