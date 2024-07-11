#include<iostream>
using namespace std;
class A{
	public:
	int i,mul=1,s=0;
	int n;
int *a;

		void enter(){
			cout<<"Enter the array of size : "<<endl;
cin>>n;
a=new int[n];
cout<<"Enter the Array Element  : "<<endl;
for(int i=0;i<n;i++){
	cin>>a[i];
		}
	}
		void show(int a[]){
			cout<<"Your Array Element Show : "<<endl;
			for(i=0;i<n;i++){
				cout<<a[i]<<" ";
				s+=a[i];
				mul*=a[i];
			}
			cout<<endl<<"Sum of array : "<<s;
			cout<<endl<<"Multiply of array : "<<mul;
		}
		   ~A() {
        delete[] a;
    }
};
int main(){
//	int a[5]={1,2,3,4,5};

	A o;
	
	o.enter();
	o.show(o.a);
	return 0;
}
