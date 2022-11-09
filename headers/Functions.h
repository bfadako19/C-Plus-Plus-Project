//include pre-processor directives
#include <iostream>
#include <string>

//use C++ standard library namespace
using namespace std;

/*this functions has 3 parameters and a local variable*/
void congratulate2(string student,string course,string programmer){
    //declare and initialize a local variable by calling strlen function
    //C strlen cannot be used on the C++ string type
    //C++ length function must be used instead 
    int days = programmer.length();
    //C++ string may not be formatted using the %s format specifier
    //the string must be converted to a const char * using the c_str function
    //before it may be formatted using the %s
    //the perferred way to output the C++ string is by using cout
     printf("%s has done as much as %s programming as %s could fit into %d days\n",
     student.c_str(),course.c_str(),programmer.c_str(),days);

}

/*this function has 3 parameters, all having char * type
when you have a * in the type of parameter, it means the parameter is a pointer.
Pointers refer to memory locations instead of holding values. Char * means the parameters
refer to a memory location that would store a collection of characters. This is how C deals
with strings.There is no string type in C, only char * 
You could also have int *, float *,or double *
*/
void congratulate1(string student,string course,string programmer){
    cout << student << " has done as much as " << course << " programming as "<< programmer << endl; 
    //function declarations must appear in the file before calls may be made to the function
    congratulate2(student,course,programmer);
    
}
