#include<iostream>
using namespace std;
class array{
	int i,j,k,temp;
	int a[3][3];
	public:
		array(){
			cout<<"Enter the 2D array Element : "<<endl;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cin>>a[i][j];
				}
			}
			cout<<"Print 2D array Shorted : "<<endl;
				for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					for(k=0;k<3-j-1;k++){
						if(a[i][k]>a[i][k+1]){
							temp=a[i][k];
							a[i][k]=a[i][k+1];
							a[i][k+1]=temp;
						}
					}
				}
			}
				for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<a[i][j];
				}
				cout<<endl;
			}
			
		}
};
int main(){
	array obj;
	return 0;
}
