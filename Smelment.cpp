#include<iostream>
using namespace std;
class array{
	int i,j=0,k,n,value,temp,t,*a;
	public:
	array(){
		cout<<"Enter the array Size : "<<endl;
		cin>>n;
		a=new int[n];
		cout<<"Enter the array Element : "<<endl;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<"which one Elemet same value and same address "<<endl;
		cin>>value;
		for(k=0;k<n;k++){
		    if(a[k]==value)
		   {
		   	 t=a[k];
		    break;
		   }
		}
		j=0;
		cout<<"**************"<<endl;
		int ar[n-1];
	   for(i=0;i<n;i++){
	    if(i==k){
	    	continue;
		}
	else{
//	cout<<a[i]<<endl;
	  for(j=0;j<n-1;j++){
	  	if(a[i]>a[j]){
	  		temp=a[i];
	  		a[i]=a[j];
	  		a[j]=temp;
		  }
	  }
	  
	   }
	   
	}
	cout<<"shorted "<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}

		
   	
	}
};
int main(){
	array obj;
}
