#include<iostream>
using namespace std;   // one element same location and unshorted to shorted array
class array{
	int i,j,k,*a,n,temp,location;
	public:
		array(){
			j=0;
			cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			a=new int[n];
			int *ar=new int[n];
			for(i=0;i<n;i++){
				cin>>a[i];	
			}
			cout<<"Enter the Location you are want to Keep same value : "<<endl;
			cin>>location;
			for(i=0;i<n;i++){
			   if(i!=location){
			   		ar[i]=a[j];
				
			   
			   }
			   else
				{
					temp=a[i];
				
				}
					j++;
				}
			
			cout<<"Your printed array : "<<endl;
			for(i=0;i<n;i++){
				if(i==location){
					continue;
				}
				else
				cout<<ar[i]<<endl;
			}
		for(i=0;i<n;i++){
				if(i==location){
					continue;
				}
				else
				{
					for(j=0;j<n;j++){
						if(ar[i]<ar[j]){
							int t=ar[i];
							ar[i]=ar[j];
							ar[j]=t;
						}
					}
				}
			}
		cout<<"Your printed array : "<<endl;
			for(i=0;i<n;i++){
				if(i==location){
				ar[i]=temp;
				cout<<ar[i]<<endl;
				}
				else
				cout<<ar[i]<<endl;
			}
		}
	
};
int main(){
	array obj;
	return 0;
}
