#include<iostream>
using namespace std;
struct Student
{
	int id;
	char name[10];
	float fees;	
};
struct Student S;
void setStudent();
void getStudent();
int main()
{
	setStudent();
	getStudent();
	
	return 0;
}
void setStudent()
{
	cout<<"\nEnter the ID:";
	cin>>S.id;
	cout<<"\nEnter the Name:";
	cin>>S.name;
	cout<<"\nEnter the Fees:";
	cin>>S.fees;
}
void getStudent()
{
	cout<<"\nID:"<<S.id;
	cout<<"\nName:"<<S.name;
	cout<<"\nFees:"<<S.fees;	
}