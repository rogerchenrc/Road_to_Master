#include<iostream>
using namespace std;



//Overloading -->It means defining two or more functions or operators that have the same name,
// but whose effect depends on the types of their actual arguments

class Counter{
    public:
        Counter(); // default constructor
        int getCount();
        void increaseBy(int x);
    private:
        int count;

};


Counter::Counter(){count=0;} //constructer

int Counter::getCount(){
    return count;
}

void Counter::increaseBy(int x){
    count += x;
}

//When member function is defined outside the class body, it is necessary to specify
//which class it belongs to, which is done by preceeding the function name with scoping specifier name
// ---------------            class_name::member_name         -----------------


//Destructor is denoted as ~T
