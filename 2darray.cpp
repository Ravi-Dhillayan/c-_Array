#include<iostream>
using namespace std;

//int main() {
//	int i, j, k;
//	int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
//	for(i = 0; i < 2; i++) {
//		for(j = 0; j < 2; j++) {
//			cout << arr[i][j];
//		}
//		cout << endl;
//		for(k = 0; k < 2; k++) {
//			cout << arr[i][k];
//		}
//		cout << endl << endl;
//	}
//}
//
int main() {
	
	int arr[2][2] ;
	int n;
	cout<<"Enter the n number : "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>arr[i][j];
	}
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << arr[i][j] ;
		}
		cout<<endl;
	}  
}
