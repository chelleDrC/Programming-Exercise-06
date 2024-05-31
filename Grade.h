#include <iostream>
using namespace std;

class Grade{
    private:
        int Grade_num;
        string Subject;
    public:
        //Constructor
        Grade (){} // No parameters requried

        Grade(int newGrade, string newSubject){
            Grade_num = newGrade;
            Subject = newSubject;
        }
        //Display Grade
        void displayGrade(){
            cout << "Grade: " << Grade_num << endl;
            cout << "Subject: " << Subject << endl;
            cout << "Status: ";
            if (Grade_num > 60){
                cout << "PASSED!" << endl;
            }else {
                cout << "FAILED!" << endl;	
            }
        }

        //Setters and Getters

        //SET GRADE
        void setGrade(int newGrade){
            if( (newGrade >= 0) && (newGrade <= 100) ){
                Grade_num = newGrade;
            }else{
                cout << "Invalid Grade!!!" << endl;
            }
        }

        //SET SUBJECT
        void setSubject(string newSubject){
            Subject = newSubject;
        }

        //GET GRADE
        int getGrade(){
            return Grade_num;
        }

        //GET SUBJECT
        string getSubject(){
            return Subject;
        }
};