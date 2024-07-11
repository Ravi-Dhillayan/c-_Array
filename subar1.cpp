#include<iostream>
using namespace std;
class ar{
	int i,j,k,*a,n,sum=0;
	public:
		void sub(){
			cout<<"How many Size of array : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the array Element : "<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			}
		  for(i=0;i<n;i++){
		  	cout<<"Your Sub array in which array : "<<endl;
		  		sum=0;
		  	for(j=i;j<n;j++){
		  
		  		for(k=i;k<=j;k++)
		  		{
		  			cout<<a[k]<<" ";
		  		
				  }
				  cout<<endl;
				 
			  }
			  cout<<"Sum of array in Sub array : "<<endl;
			   for(k=i;k<j;k++){
				  	sum= sum+a[k];
				  	cout<<sum;
				  	cout<<endl;
				  }
				  
		  }
		}
};
int main(){
   ar obj;
   obj.sub();
   return 0;
}
//#include<iostream>
//using namespace std;
//class arr{
//	int i,j,k,*a,n;
//	public:
//		arr(){
//			cout<<"how many array element Size : "<<endl;
//			cin>>n;
//			a=new int[n];
//			cout<<"Enter the Array Element : "<<endl;
//			for(i=0;i<n;i++){
//				cin>>a[i];
//			}
//			for(i=0;i<n;i++){
//				cout<<"Your Sub array in Array : "<<endl;
//			  
//				for(j=i;j<n;j++){
//						int sum=0;
//					for(k=i;k<=j;k++){
//						cout<<a[k]<<" ";
//                        sum=sum+a[k];
//                       
//					}
//					cout<<endl;
//					   cout<<"Sum of sub array :: "<<sum;
//					cout<<endl;
//				}
//			}
//		}
//};
//int main(){
//	arr obj;
//	return 0;
//}
