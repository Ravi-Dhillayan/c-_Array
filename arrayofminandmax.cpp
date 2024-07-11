#include <iostream>
using namespace std;

class Array {
private:
    int i, n;
//    int ar[];
 int *ar;
   int min, max;

public:
 
       
	
    

    void mini() {
    	  min = INT_MAX; 
       max = INT_MIN; // Initialize max to the minimum possible value
        cout << "Enter the Size of Array : " << endl;
        cin >> n;
        ar = new int[n];   // address of array
//        ar[n];
        for (i = 0; i < n; i++) {
            cin >> ar[i];
            if (ar[i] < min) {
                min = ar[i];
            }
            if (ar[i] > max) {
                max = ar[i]; 
            }
        }
        cout << "Minimum value in the array: " << min << endl;
        cout << "Maximum value in the array: " << max << endl;
        delete[] ar; 
    }
};

int main() {
    Array ao;
    ao.mini();
    return 0;
}
//#include<iostream>
//using namespace std;
//class A{
//	int a,b,c;
//	public:
//	void get(){
//		cout<<"Enter the 1st Number : "<<endl;
//		cin>>a;
//		cout<<"Enter the 2nd Number : "<<endl;
//		cin>>b;
//	}
//	void dis(){
//		cout<<"1st Number : "<<a<<endl;
//		cout<<"2nd Number : "<<b<<endl;
//	}
//};
//int main(){
//	A o;
//	o.get();
//	o.dis();
//}

