#include<iostream>
using namespace std;
class arr{
	int i,j,n,a[];
	public:
		void Enter();
		void show();
		
};
void arr::Enter(){
	cout<<"Enter the Array Size : "<<endl;
	cin>>n;
    cout<<"Enter the unshorted array : "<<endl;
  	a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
}
void arr::show(){
 cout<<"Your Array Sorted : "<<endl;
 for(i=0;i<n;i++){
 	for(int j=i;j<n;j++){
 		if(a[i]>a[j]){
 			int temp=a[i];
 			a[i]=a[j];
 			a[j]=temp;
 			
		 }
	 }
	 cout<<a[i]<<endl;
 }
 	
}
int main(){
	arr ao;
	ao.Enter();
	ao.show();
}
