#include<iostream>
using namespace std;
class binary{
	int n,n1,*a,*ar,i=0,j=0;
	public:
		void fun(){
			cout<<"Enter the 1st value change the binary : "<<endl;
			cin>>n;
			a=new int[n];
		while(n>0){
				a[i]=n%2;
				n=n/2;
				i++;
			}
			cout<<"Binary value your Number: "<<endl;
			for(i=3;i>=0;i--){
				cout<<a[i]<<" ";
			}
			cout<<endl;
			cout<<"Enter the 2nd number : "<<endl;
			cin>>n1;
			ar=new int[n1];
			while(n1>0){
				ar[j]=n1%2;
				n1=n1/2;
				j++;
			}
			cout<<"Binary value 2nd Your number : "<<endl;
			for(j=3;j>=0;j--){
				cout<<ar[j]<<" " ;
			}
			cout<<endl;
		}
};
int main(){
	binary obj;
	obj.fun();
	return 0;
}
