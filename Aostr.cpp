#include<iostream>
using namespace std;
class tem{
		public:
	template <class T>
//	         T *a,n;   this type is not working template 
//			T nm,r,c;
		void enter(){

			T nm,r,c;
					cout<<"Enter the name of student : "<<endl;
		cin>>nm;
		cout<<"Enter the roll_no of student : "<<endl;
		cin>>r;
		cout<<"Enter the class of student : "<<endl;
		cin>>c;
			cout<<"Name of the student : "<<nm<<endl;
			cout<<"Roll_no of the student : "<<r<<endl;
			cout<<"Class of the student : "<<c<<endl;
			
		}
		// template is not work to show function 
//		void show(){
//			cout<<"Name of the student : "<<nm<<endl;
//			cout<<"Roll_no of the student : "<<r<<endl;
//			cout<<"Class of the student : "<<c<<endl; 
//		}
};

class Ar{
	int *a,n;
	char name[10];
	char roll_no[10];
	char clas[19];
	public:
	void get(){
		cout<<"who many you are Enter the record : "<<endl;
		cin>>n;
		a=new int[n];
	for(int i=0;i<n;i++){
				cout<<"Enter the name of student : "<<endl;
		cin>>name;
		cout<<"Enter the roll_no of student : "<<endl;
		cin>>roll_no;
		cout<<"Enter the class of student : "<<endl;
		cin>>clas;
	}
	}
	void put();
		
};
void Ar::put(){
	for(int i=0;i<n;i++){
	cout<<"Name of student : "<<name<<endl;
	cout<<"Roll_no of student : "<<roll_no<<endl;
	cout<<"Class of student : "<<clas<<endl;
}
}
int main(){
	tem ot;
	ot.enter<string>();
//	ot.show<string>();
	Ar obj;
	obj.get();
	obj.put();
	return 0;
}
