#include<iostream>
using namespace std;
template <class T>
struct fun{
	T largest ,smallest ,no;
};
class big{
		int i,*a;
	struct fun<int> o;
	public:
		void get(){
			cout<<"Enter how many numbers you want to enter : "<<endl;
			cin>>o.no;
		
			a=new int[o.no];
			for( i=0;i<o.no;i++){
				cin>>a[i];
			}
			 int min=a[0];
			 int max=a[0];
			 for(i=0;i<o.no;i++){
			 	if(a[i]<min){
			 		min=a[i];
				 }
				 if(a[i]>max)
				 max=a[i];
			 }
			 cout<<"your min number : "<<min<<endl;
			 cout<<"Your max number : "<<max<<endl;
		}
		void dis(){
			
		}
		
};
int main(){
	big obj;
	obj.get();
	obj.dis();
}
