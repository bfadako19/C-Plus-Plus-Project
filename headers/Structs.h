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
//delcare another struct for a Person using a type definition. A type definition
//defines an alias for a struct that allows an alias to be used in a primitive
//data type
typedef struct {
    //declare two members in the Person struct
    float heightInMeters;
    int weightInKilos;
} PersonType; //this is the alias

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

    //declare a Person struct using the alias(type definition)
    PersonType p ;
    //assign values to the members of the Person struct
    p.heightInMeters = 1.8;
    p.weightInKilos = 96;
    //dispaly values in members
    cout << "Person's weight is " << p.weightInKilos << " Kilograms" << endl;
    cout << "Person's height is " << p.heightInMeters << " Meters" << endl;
}
/*this function will have a struct as a parameter. It will compute and return
the BMI of the Person struct*/
float bodyMassIndex(struct Person p){
    return p.weightInKilos / (p.heightInMeters*p.heightInMeters);
}
