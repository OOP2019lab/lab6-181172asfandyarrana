#include "student.h"
#include <iostream>
using namespace std;

void printarr(student* arr)
{
	for(int i=0;i<3;i++)
	{
		arr[i].print();
		cout<<endl;
	}

}

//void check(student* arr)
//
//{
//	int k=0;
//	student arr2[3];
//	for(int i=0;i<3;i++)
//	{
//		if(arr[i].getGPA() > 2.0)
//		{
//			arr2[k].GPA=arr[i].getGPA();
//			
//
//		}
//	}
//



void main()
{
		student arr[3]={student(3,2.00),student(3,3.00),student(4,2.33)};

	arr[0].addQuizScore(1);
	arr[0].addQuizScore(4);
	arr[0].addQuizScore(10);
	arr[1].addQuizScore(10);
	arr[1].addQuizScore(4);
	arr[1].addQuizScore(9);
	arr[2].addQuizScore(9);
	arr[2].addQuizScore(8);
	arr[2].addQuizScore(7);
	printarr(arr);

	student** arr2=new student*[4];

	arr2[0]=new student(3,2.0);
	arr2[1]=new student(3,3.0);
	arr2[2]=new student(4,2.33);
	arr2[3]=new student(4,1.0);
	
	arr2[0]->addQuizScore(1);
	arr2[0]->addQuizScore(4);
	arr2[0]->addQuizScore(10);
	arr2[1]->addQuizScore(10);
	arr2[1]->addQuizScore(4);
	arr2[1]->addQuizScore(9);
	arr2[2]->addQuizScore(9);
	arr2[2]->addQuizScore(8);
	arr2[2]->addQuizScore(7);
	arr2[3]->addQuizScore(2);
	arr2[3]->addQuizScore(3);
	

	for (int a=0;a<4;a++)
	{
		arr2[a]->print();
		cout<<endl;
	}



}