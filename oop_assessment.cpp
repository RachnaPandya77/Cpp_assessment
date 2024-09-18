/*Define a class to represent lecture details. Include the following members and the
program should handle at least details of 5 lecturers.
Data members:
a) Name of the lecturer
b) Name of the subject
c) Name of course
d) Number of lecturers
Data functions:
a) To assign initial values
b) To add a lecture details
c) To display name and lecture details */

#include <iostream>
using namespace std;

class lectureDetail
{
public:
    string lectureName;
    string subjectName;
    string courseName;
    int numOfLecture;

    // constructor for values
    lectureDetail(string lecture, string subject, string course, int lectureNum)
    {
        lectureName = lecture;
        subjectName = subject;
        courseName = course;
        numOfLecture = lectureNum;
    }

    // Function -- add lecture detail
    void Add_Lecture_Detail(string lecture, string subject, string course, int lectureNum)
    {
        lectureName = lecture;
        subjectName = subject;
        courseName = course;
        numOfLecture = lectureNum;
    }

    // Function --  display name and lecture detail
    void Display_details()
    {
        cout << "lecturer Name: " << lectureName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number Of Lecture: " << numOfLecture << endl;
        cout << endl;
    }
};

int main()
{
    cout << "--------DETAILS  OF  LECTURE--------" << endl;
    cout << endl;

    // initilize lecture with array
    lectureDetail lectures[5] =
        {
            lectureDetail("Jaydeep sir", "OOP Concept", "SE", 50),
            lectureDetail("Snehal Ma'am", "C language", "BCA", 40),
            lectureDetail("Nikhil Sir", "HTML", "BCA-2", 45),
            lectureDetail("Vaishali Ma'am", "Economics", "BA", 40),
            lectureDetail("Jagruti Ma'am", "Mathematics", "B.Com", 55)};

    // display lecture detail -- for loop

    for (int i = 0; i < 5; i++)
    {
        lectures[i].Display_details();
        cout << endl;
    }

    return 0;
}