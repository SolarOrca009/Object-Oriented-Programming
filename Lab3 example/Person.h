//person.h
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person{
    
    public:

        //accessor functions
        string getName() const;
        int getAGe() const;
        string getOccupation() const;
        bool getLivesInIE() const;
        bool getMovedLocation() const;
        
        Person ();
        Person (string name, int age, string occupation, bool lives_in_IE);
        ~Person();
        
        //Mutator FUnctions
        void updateName(string new_name);
        void updateAge (int new_age);
        void updateOccupation (string new_Occupation);
        void movedLocation ();

    



}