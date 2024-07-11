#include<iostream>
using namespace std;
class array{
	int i,max,sec,n;
	int *a;
	public:
		void arr(){
			cout<<"Enter the size of array : "<<endl;
			cin>>n;
			a=new int[n];
		  cout<<"Enter the Element of array : "<<endl;
		 
		  for(i=0;i<n;i++)
		  {
		  	cin>>a[i];
		  	
		  }
		   int max=a[0];
		  int sec=a[0];
		  for(i=0;i<n;i++){
		  	if(max<a[i])
           {
           	sec=max;
           	max=a[i];
		   }
		   else if(sec<a[i])
		   {
		   	sec=a[i];
		   }
		  }
		  cout<<"second leargest number in array : "<<sec<<endl;
				}
};
int main(){
	array obj;
	obj.arr();
	return 0;
}
