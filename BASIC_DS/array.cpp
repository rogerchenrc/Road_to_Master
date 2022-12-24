#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
using std::string;

//Create an array 

class GameEntry{
    public:
        GameEntry(const string &n = "", int s = 0); // what's the difference between & and without &
        string getName() const;
        int getScore() const;
    private:
        string name;
        int score;
};

GameEntry::GameEntry(const string & n, int s):name(n), score(s){} //constructor
string GameEntry::getName() const {return name;}
int GameEntry::getScore() const {return score;}
/*-------------------Scores--------------------------*/
class Scores{
    public:
        Scores(int maxEnt = 10);
        ~Scores();  //Desctructor
        void add(const GameEntry& e);
        GameEntry remove(int i);
    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;

};

Scores::Scores(int maxEnt){
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores(){
    delete [] entries;
}

void Scores::add(const GameEntry & e){
    int newScore = e.getScore();
    //Check whether the entry is full
    //MaxEntries will be set as 10
    if(numEntries==maxEntries){
        if(newScore <= entries[maxEntries-1].getScore()){
            return; //not enough then ignore
        }
    }
    else numEntries++;
    int i = numEntries - 2; 
    while (i>=0 && newScore>entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1]=e;
    
}

GameEntry Scores::remove(int i){
    if((i<0) || (i>=numEntries)){
        throw out_of_range("Invalid index");
        // throw IndexOutofBounds("Invalid index");
    }
    GameEntry e = entries[i];
    for(int j = i+1; j < numEntries; j++){
        entries[j-1] = entries[j];
    }
    numEntries--;
    return e;

}