#include<iostream>
#include<string>
using namespace std;
void data( int,float,float,string);

int main()
{
	float salary,percent,sale;
	string name;
	cout<<"*******Homework2*******"<<endl;
	cout<<"Enter name :";
	cin>>name;
	cout<<"Enter Salary :";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commission Percent : ";
	cin>>percent;
	data(sale,salary,percent,name);
	return(0);
}
void data(int sale,float percent,float salary,string name){
	cout<<"Your Name : "<<name<<endl;
	cout<<"Total Revenue : "<<(sale+(salary*(percent/100)))<<endl;

}