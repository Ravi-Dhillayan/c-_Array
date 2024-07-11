#include<iostream>
using namespace std;
class search{
	int i,found,n,a[];
	int *ar; 
	public:
		void show();
		void show(int x,int y);
};
void search :: show(){
	cout<<"Enter the Size of Array :"<<endl;
	cin>>n;
	ar=new int[n];
	for(i=1;i<=n;i++){
		cin>>ar[i];
	}	
}
void search :: show(int x,int y){
	cout<<"Enter the Your search the Number :"<<endl;
   cin>>found;
o
   for(i=1;i<=n;i++){
   	if(found==ar[i]){
   		cout<<"Your Number "<<i<<" Location = "<<ar[i];
	   }
	  
   }
   	
}
int main(){
	search so;
	so.show();
	so.show(1,2);
}
