#include "student.h"
using namespace std;
#include <iostream>
student::student()
{
	counter++;
	id=counter;
	GPA=-1.00;
	quizCapacity=3;
	quizScore=new float[quizCapacity];
	for(int i=0;i<quizCapacity;i++)
	{
		quizScore[i]=-1;
	}
	quizTaken=0;

}
student::student(int capacity,float gpa)
{
	counter++;
	id=counter;
	GPA=gpa;
	quizCapacity=capacity;
	quizScore=new float[quizCapacity];
	for(int i=0;i<quizCapacity;i++)
	{
		quizScore[i]=-1;
	}
	quizTaken=0;

}
student::student(const student &c1)
{
  id=c1.id;
  GPA=c1.GPA;
  quizCapacity=c1.quizCapacity;
  quizScore=new float[quizCapacity];
  quizTaken=c1.quizTaken;
  for(int i=0;i<quizCapacity;i++)
  {
	  quizScore[i]=c1.quizScore[i];
  }
}

student::~student()
{

	id=0;
	GPA=-1;
	quizCapacity=3;
	delete[]quizScore;
	quizScore=nullptr;
	quizTaken=0;
}
/////
void student::setGPA(float gpa)
{
  GPA=gpa;
}
float student::getGPA() const
{
	return  GPA;
}
////
void student::print() const
{
	cout<<"THE ID OF THE STUDENT IS:"<<id<<endl;
	cout<<"THE GPA OF THE STUDENT IS:"<<GPA<<endl;
	cout<<"THE NUMBER OF QUIZZES TAKEN BY THE STUDENT IS:"<<quizTaken<<endl;
	
	for(int i=0;i<quizTaken;i++)
	{
		cout<<"THE QUIZ SCORE ON TEST["<<i+1<<"] OF THE STUDENT IS:"<<quizScore[i]<<endl;
	}
}

void student::addQuizScore(float score)
{
	if(quizTaken<quizCapacity)
	{
		quizScore[quizTaken]=score;
		quizTaken++;
	}
	else 
	cout<<"NO SPACE TO ADD NEW SCORE"<<endl;
}

bool student::compare(student c1)
{
	if(c1.GPA>GPA)
		return false;
	else 
		return true;

}

void student::updateScore(int quiznumber,float newscore)
{
	if(quiznumber>quizTaken)
	{cout<<"Quiz "<<quiznumber<<" NOT TAKEN"<<endl;}
	else
	{
	quiznumber--;
	if(quizScore[quiznumber]!=-1)
	 {
		 quizScore[quiznumber]=newscore;
	}
	}
}
int student::counter=0;