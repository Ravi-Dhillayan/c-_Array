#include<iostream>
using namespace std;
class array{
	int i,j,n,nv,*a,location;
	public:
		array(){
			cout<<"Enter the size of array : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the Array Element : "<<endl;
			for(i=0;i<n-1;i++){
				cin>>a[i];
			}cout<<"Inserted the new element and your Location :"<<endl;
			cout<<"printed Array : "<<endl;
			for(i=n;i>location;--i){
			  a[i]=a[i-1];
			}
			a[location]=nv;
			cout<<"All Element Printed : "<<endl;
			for(i=0;i<n;i++){
			cout<<a[i];
			cout<<endl;	
			
			cout<<"Enter the new element and Location in array : "<<endl;
			cin>>nv;
			cin>>location;
			
			}
		}
};
int main(){
	array obj;
	return 0;
}
