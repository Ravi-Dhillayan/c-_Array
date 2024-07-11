#include<iostream>
using namespace std;
class sub{
	int n;
	public:
		friend void arr(sub &o);
};
void arr(sub &o){
	int i,j,sum=0;
     cout<<"How many Size of array : "<<endl;
     cin>>o.n;
     int *a=new int[o.n];
     cout<<"Enter Array Element : "<<endl;
     for(i=0;i<o.n;i++){
     	cin>>a[i];
	 }
	 	cout<<"Sum of Sub array for in Array :: "<<endl;
	 for(i=0;i<o.n;i++){
	 
	 if(i==0){
	 		for(j=0;j<o.n;j++){
	 			cout<<a[j]<<" ";
			 }
			 cout<<endl;
		}
		else if(i==1){
			 	for(j=0;j<o.n-1;j++)
			 {
			 	sum=a[j]+a[j+1];
			 	cout<<sum<<" ";
			 }
			 
			 cout<<endl;
			 	 sum=0;
			 }
		
			 else if(i==2){
			 	for(j=0;j<o.n-2;j++){
			 		sum=a[j]+a[j+1]+a[j+2];
			 			cout<<sum<<" ";
				 }
				 cout<<endl;
				  sum=0;
			 }
			
			 	 else if(i==3){
			 	for(j=0;j<o.n-3;j++){
			 		sum=a[j]+a[j+1]+a[j+2]+a[j+3];
			 			cout<<sum<<" ";
				 }
				 cout<<endl;
				 	 sum=0;
			}
			
				 	 else if(i==4){
			 	for(j=0;j<o.n-4;j++){
			 		sum=a[j]+a[j+1]+a[j+2]+a[j+3]+a[j+4];
			 		 cout<<sum<<" ";
				 }
				 cout<<endl;
			 }
			 
	 
 }
		
}
int main(){
	sub ob;
	arr(ob);
	return 0;
}
