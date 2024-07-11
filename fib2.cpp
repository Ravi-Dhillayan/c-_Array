#include<iostream>
using namespace std;
class A{
	public:
	  int i,j,n,a[10][10];
	  int x,s,y,z=0,k=1;
	A (){
		cout<<"______________*******Hello Welcome *******_________________"<<endl;
	
	}
		friend class B;
};
class B{
	public:
		
		friend void fib(A &o);
};
void fib(A &o){
	cout<<"Enter the n number fibonaccsi serice's : "<<endl;
	cin>>o.n;
	for(o.i=0;o.i<o.n;o.i++){
		cout<<o.z<<endl;
		o.s=o.z+o.k;
		o.z=o.k;
		o.k=o.s;
	}
}
class td{
  public:
    friend void  tdar(A &o);
	
};
	void tdar(A &o){
  		 	cout<<"Enter the n number of matrix : "<<endl;
	cin>>o.n;
//	o.a=new int [o.n];
cout<<"Enter the matrix Element : "<<endl;
    for(o.i=0;o.i<o.n;o.i++){
		for(o.j=0;o.j<o.n;o.j++){
		    cin>>o.a[o.i][o.j];
		}
	}
//	o.a= new int[o.n][o.n];
cout<<"Your Matrix and matrix Element : "<<endl;
	for(o.i=0;o.i<o.n;o.i++){
		for(o.j=0;o.j<o.n;o.j++){
			cout<<o.a[o.i][o.j]<<" ";
		}
		cout<<endl;
	}
	  }
int main(){
	A ao;
	fib(ao);
	tdar(ao);
}
