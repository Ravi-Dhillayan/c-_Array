#include<iostream>
using namespace std;
class ar{
	int i,n,a[];
	public:
		void aar(){
			cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			a[n];
			cout<<"Enter the array Element : "<<endl;
			for(i=1;i<=n;i++){
				cin>>a[i];
			}
			cout<<"You are Enter array :"<<endl;
			for(i=1;i<=n;i++){
				cout<<a[i]<<endl;
			}
		}
};
int main(){
	ar aro[10];
	int choice;
	cout<<"How many time do you want this code to run: "<<endl;
	cin>>choice;
	for(int i=0;i<choice;i++){
		 aro[i].aar();
	}
	
}
