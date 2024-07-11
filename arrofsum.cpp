#include<iostream>
using namespace std;
class Sum {
public:
	int i, j, n, sum;
	int *ar; // Use dynamic memory allocation for the array

	friend void enter(Sum &o);
	friend void show(Sum &o);
};

void enter(Sum &o){
	cout<<"Enter the SIze of the Array :"<<endl;
	cin>>o.n;
	o.ar=new int[o.n];
	for(o.i=0;o.i<o.n;o.i++){
		cin>>o.ar[o.i];
	}
}
//void enter(Sum &o) {
//	cout << "Enter the Size of the Array: " << endl;
//	cin >> o.n;
//	o.ar = new int[o.n]; // Use dynamic memory allocation for the array
//	for (o.i = 0; o.i < o.n; o.i++) {
//		cin >> o.ar[o.i];
//	}
//}


void show(Sum &o){
	cout<<"Array of Sum : "<<endl;
	o.sum=0;
	
	for(o.i=0;o.i<o.n;o.i++){
		o.sum+=o.ar[o.i];
		
		
	}
	cout<<o.sum;
}


int main() {
	Sum so;
	enter(so);
	show(so);
	delete[] so.ar;
//	delete[] so.ar; // Deallocate the dynamically allocated memory
	return 0;
}

