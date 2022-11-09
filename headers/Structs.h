//include pre-processor directives
#include <iostream>

//a struct is a collection of related data(members)
//the members may only be in fields(variables)
//the members may be of different types
//declare a struct for a person
struct Person
{
    //declare two members in the Person struct
    float heightInMeters;
    int weightInKilos;
};

//use C++ standard library namespace
using namespace std;

/*this function uses the Person struct for purposes of displaying
the values in its members*/
void accessStructMembers(void){
    //declare a person struct
    struct Person person;
    //assign values to the members of the person struct
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;
    //dispaly values in members
    cout << "Person's weight is " << person.weightInKilos << " Kilograms" << endl;
    cout << "Person's height is " << person.heightInMeters << " Meters" << endl;
}

