#include<iostream>
//#include<String.h>
using namespace std;
class student{
	
public:

   string name;
	float grade;
     	int age;
    	 	void  inp()
		 {
		 	cout<<"Enter student name : ";
			 cin>>name;cout<<endl;
		  cout<<"Enter student age : ";
		  cin>>age;cout<<endl;
		  cout<<"Enter student grade : ";
		  cin>>grade;cout<<endl;
		  
		  } 
		void dis(){
			cout<<"student name : "<<name<<endl;
		  cout<<"student age : "<<age<<endl;
		  cout<<"student grade : "<<grade<<endl;
		  
		}
};
  int main(){
  	student s1;
  	s1.inp();
	  
  	cout<<"Student Information access for Direct member function : "<<endl;
  	s1.dis();
  		student* po;
  		po=new student;
//  	po->age=21;
//  	po->grade=90.0;
//  	po->name="Ashok";
po->inp();
  	  cout<<"Student Information access for pointer member function : "<<endl;
  	po->dis();
  }
  
