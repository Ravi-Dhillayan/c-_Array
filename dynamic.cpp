#include<iostream>
using namespace std;
class A{
		public:
	int i,j,n,*a;

		A(){
			cout<<"Your Welcome to program "<<endl;
		}
//		friend class B;
};
class B{
	   public:
	   friend 	void ar(A &o);
};
void  ar(A &o){
	cout<<"Enter the size of array : "<<endl;
	cin>>o.n;
	o.a=new int[o.n];
	for(o.i=0;o.i<o.n;o.i++){
		cin>>o.a[o.i];
	}
	cout<<"Your array Element : "<<endl;
	for(o.i=0;o.i<o.n;o.i++){
		cout<<o.a[o.i];
	}
	

}
int main(){
	A ao;
	ar(ao);
}
