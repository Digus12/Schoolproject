
#include <iostream>
using namespace std;

class Mammal {

public:
    virtual string toName() const = 0 { return "mamal"; };
    string nursesYoung() {
        cout << "I am a " + toName() + ". I am nursing.\n";        
        return  "I am a " + toName() + ". I am nursing.\n";
    }

    virtual bool isRuminant() = 0;    
    virtual bool hasMultipleStomachs() = 0;
    virtual ~Mammal() {};
    Mammal() {};
    
};

class GrazingMammal : public Mammal {

public:
    GrazingMammal() {};
    ~GrazingMammal() {};
    string toName() const { return "GrazingMamal"; };    
    void grazes() {
        cout << "I am a " + toName() + ". I am grazinig.\n";
    }  

    //Override
    bool hasMultipleStomachs() {                
        string className = toName();          
        if (isRuminant()) {
            cout << "I am a " + className + ". I have multiple stomachs.\n";
            return true;
        }            
        else {
            cout << "I am a " + className + ". I do not have multiple stomachs.\n";
            return  false;
        }
            
    }
    
    //Override
    bool isRuminant()  {
        string className = toName();             
        if (isRuminant()) {
            cout << "I am a " + className + ". I am a Ruminant.";
            return true;            
        }            
        else {
            cout << "I am a " + className + ". I am not a Ruminant.\n";
            return false;            
        }
         
    }   
};

class Ruminant : public GrazingMammal {
public:  
    Ruminant() {};
    ~Ruminant() {};
    string toName() const { return "Ruminent"; };        
    void chewsCud() {
        cout << "I am a " + toName() + ". I am chewing cud.\n";
    }
    bool isRuminant() {                
        string className = toName();  
        cout << "I am a " + className + ". I am a Ruminant.\n";
        return true;
    }
  
};

class Cow: public Ruminant {    
public:    
    string toName() const { return "Cow"; };    
};


class Goat : public Ruminant {    
public:    
    string toName() const { return "Goat"; }    
};

class Horse : public GrazingMammal {
public:
    string toName() const { return "Horse"; };    
    bool isRuminant() {    
        string className = toName();
        cout << "I am a " + className + ". I am a not Ruminant.\n";
        return false; }
};

int main()
{
    std::cout << "Hello World!\n";
    Cow cow;
    Goat goat;
    Horse horse;
    cow.nursesYoung();
    cow.grazes();
    cow.chewsCud();
    cow.isRuminant();
    cow.hasMultipleStomachs();
    goat.nursesYoung();
    goat.grazes();
    goat.chewsCud();
    goat.isRuminant();
    goat.hasMultipleStomachs();
    horse.nursesYoung();
    horse.grazes();
    horse.isRuminant();
    horse.hasMultipleStomachs();

}

