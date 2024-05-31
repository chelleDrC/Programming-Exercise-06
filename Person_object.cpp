#include <iostream>
#include <string>
#include "Person.h"
#include "Grade.h"

using namespace std;

//Display Basic Infos about the Program
void DisplayInfos(){
    cout<< "This Function Will Display the Age, Gender, Grade and Subject  of the Student" << endl;
    cout<< "Programmer: Richelle S. de Arce" << endl;
    cout << "Laboratory 06: OOP 2" << endl << endl;
}

//Main Function
int main (){    
    //Variable Declarations
    int age , grade; 
    char gender;
    string subject;

    //Displaying Program Description
    DisplayInfos();

    //Getting Inputs
    cout << "Enter Age: ";
    cin >> age;
    cout << "Gender (M/F): ";
    cin >> gender;

    //Putting the Information through a Constructor
     Person p1(age, gender);

    //Empty Constructor for Grade
    Grade g1;
    //Getting Inputs of the Grades
    cout << "Enter Grade: ";
    cin >> grade;
    cout << "Enter Subject: ";
    cin >> subject;

    //Using SETTERS in Grade
    g1.setGrade(grade);
    g1.setSubject(subject);

    //DISPLAY USING GETTERS
    cout << endl << "Displaying Inputs" << endl;
    p1.view(p1.getage(), p1.getgender());
    g1.displayGrade();
}
 