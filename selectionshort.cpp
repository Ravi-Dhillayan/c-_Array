#include<iostream>
using namespace std;
class C{
	int n, i,temp,min,j,a[];
	public:
		void enter();
		void show();
		
		
};
void C::show(){
	cout<<"Enter the array of Size : "<<endl;
	cin>>n;
	a[n];
	cout<<"enter the array Element : "<<endl;
	for(i=0;i<n;i++){
			cin>>a[i];
	}
	cout<<"shorted array : "<<endl;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			
		}
		cout<<a[i]<<endl;
	}
}
void C::enter(){
	cout<<"Enter the array of Size : "<<endl;
	cin>>n;
	a[n];
	for(i=0;i<n;i++){
			cin>>a[i];
	}
 for(i=0;i<n-1;i++){
 	min=i;
 	for(j=i+1;j<n;j++)
 	{
 	if(a[min]>a[j]){
 			min=j;
		 }
		
	 }
	  temp=a[i];
 			a[i]=a[min];
 			a[min]=temp;
 }
 cout<<"Shorted array : "<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
int main(){
	C o;
	o.enter();
//o.show();
}
