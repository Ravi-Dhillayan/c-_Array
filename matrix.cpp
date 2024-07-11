#include<iostream>
using namespace std;
class ar{
	int i,j,n;
	public:
		void fun(){
			int *a;
			cout<<"Enter the size of array : "<<endl;
			cin>>n;
			cout<<"Array Element matrix : "<<endl;
			a=new int[n];
		int 	m=1;
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					cout<<m<<" ";
					m++;
				}
				cout<<endl;
			}
		}
};
int main(){
	ar obj;
	obj.fun();
	return 0;
}
