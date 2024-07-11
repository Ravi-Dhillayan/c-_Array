#include<iostream>
using namespace std;
class s{
	public:
	s(){
		cout<<"***Hello! Your Welcome to Program***"<<endl;
	}
};
class search:public s{
		public:
	 int i,mul,n;
	int* arr;

		friend void  get();
	   friend void set();
	   	
};
void get(search &o){
	cout<<"Enter the Size of Array : "<<endl;
	cin>>o.n;
//		o.ar=new int[o.n];
o.arr = new int[o.n];
	for(o.i=1;o.i<=o.n;o.i++){
		cin>>o.arr[o.i];
	}
}
void set(search o){
	o.mul=1;
	  cout<<"Multiple of Your all element : "<<endl;
	  for(o.i=1;o.i<=o.n;o.i++){
	  	o.mul*=o.arr[o.i];
	  	cout<<"Multiple "<<o.i<<" Number = "<<o.mul<<endl;
	  }
}
int main(){
	int i,mul,n;
	int *arr;
	cout<<"Enter the Size of Array : "<<endl;
	cin>>n;
//		o.ar=new int[o.n];
arr = new int[n];
	for(i=1;i<=n;i++){
		cin>>arr[i];
	}
		for(i=1;i<=n;i++){
		cout<<arr[i];
	}
	mul=1;
	  cout<<"Multiple of Your all element : "<<endl;
	  for(i=1;i<=n;i++){
	  	mul*=arr[i];
	  	cout<<"Multiple "<<i<<" Number = "<<mul<<endl;
	  }

	search so;
	get(so);
	set(so);
}

