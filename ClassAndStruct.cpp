
#include "windows.h"
#include <iostream>
#include <vector>
#include<tuple>
using namespace std;

typedef struct Student
{
	char name[256];
	int roll = 0;

}Student;

//class School
//{
//public:
//	School()
//	{
//		currentStudents = 0;
//		students = new Student[10];
//	}
//
//	~School()
//	{
//		currentStudents = 0;
//		if (students)
//			delete[] students;
//		students = NULL;
//	}
//
//	int currentStudents;
//	Student* students;
//
//	void AddStudent(const char* name, int size, int roll)
//	{
//		memcpy(students[currentStudents].name, name, size);
//		students[currentStudents].roll = roll;
//		currentStudents++;
//		//input(name, roll);
//	}
//
//	void Display()
//	{
//
//		for (int cntr = 0; cntr < 10; cntr++)
//		{
//			//Print roll and name:	
//			cout << "Name: " << students[cntr].name << " & Roll Number: " << students[cntr].roll << endl;
//		}
//	}
//};
class VectorEg
{
public:
	int currentStudents;
	vector <Student> students;
	VectorEg()
	{
		currentStudents = 0;

	}

	~VectorEg()
	{
		students.clear();
	}

	void TestVector()
	{
		Student objStudent;
		for (auto cntr = 0; cntr < 10; cntr++)
		{
			cout << "Enter student name and roll number: ";
			cin >> objStudent.name;
			cin >> objStudent.roll;
			students.push_back(objStudent);

		}


		cout << "Size : " << students.size() << endl;

		//objStudent.name take input from key board
		//objStudent.roll take input from key board

		//students.push_back(objStudent)

	}
	void disp()
	{
		for (vector<Student>::iterator iter = students.begin(); iter != students.end(); iter++)
		{
			cout << "Name: " << (iter)->name << " \n" << "Roll no: " << (iter)->roll << " " << endl;
		}
	}
};

int main()
{
	/*School* pSchool = new School();
	
	if (pSchool)
	{
		//Add Students
		for (int cntr = 0; cntr < 10; cntr++)
		{
			char *name = new char[256];
			int roll;
			cout << "Enter the name and roll number: " << endl;
			cin >> name >> roll;
			pSchool->AddStudent(name, 10, roll);
		}
	Display Students
		pSchool->Display();
	}
	if (pSchool)
		delete pSchool;
	pSchool = NULL;
	*/
	VectorEg v;
	v.TestVector();
	v.disp();
	system("pause");
	return 0;
}






