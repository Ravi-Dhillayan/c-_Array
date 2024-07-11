#include<iostream>
#include<cstring>
using namespace std;
class Str
{
	int i,n;
	  char a[10];
	  public:
	  	void st(){
	  		cout<<"Enter Size the name of user : "<<endl;
	  		cin>>n;
	  		for(i=1;i<=n;i++){
	  			cin>>a[i];
	  			cout<<a[i];
			  }
		  }
		  
		  void scpy(){
		  	char a[]="hello how are you : ";
		  	char a1[]="Hii I am fine : ";
//		  	cout<<"Enter the size of the String : "<<endl;
//		  	cin>>n;
//		  	cout<<"Enter the two two name of the Student : "<<endl;
//		  	for(i=1;i<=n;i++){
//		  		cin>>a[i];
//		  		cin>>a1[i];
//			  }
//			  cout<<"Copy 2nd String in 1st String : "<<endl;
            cout<<a<<"\n";
			  strcpy(a,a1);
			  cout<<a<<"\n"<<endl;
		  }
};

int main(){
	Str so;
//	so.st();
	so.scpy();
}
