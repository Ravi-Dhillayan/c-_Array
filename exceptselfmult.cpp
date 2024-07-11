#include<iostream>
using namespace std;
template <class T>
struct fun{

	T *a;
};
class amul{
		int i,j,mult,n;
	public:
		struct fun<int> o;
		void amut(){
		
		cout<<"Enter the size of array : "<<endl;
		cin>>n;
		o.a=new int[n];
		cout<<"Enter the array Element : "<<endl;
		for(i=0;i<n;i++)
		{
			cin>>o.a[i];
		}
		for(i=0;i<n;i++)
		{
			mult=1;
			for(j=0;j<n;j++)
			{
				if(o.a[i]!=o.a[j])
				{
					mult=mult*o.a[j];
				}
			}
			cout<<"multple Array Except self : "<<mult<<endl;
		}
	}
	
};
int main(){
	amul obj;
	obj.amut();
	return 0;
}
