#include<iostream>
using namespace std;

class array{
    int i, j, k, n, **a; // Change *a to **a for a 2D array
public:
    void arr(){
        cout << "Enter the Size of the 2D Array: " << endl;
        cin >> n;

        // Allocate memory for an array of pointers
        a = new int*[n];

        // Allocate memory for each row separately
        for(i = 0; i < n; i++){
            a[i] = new int[n];
        }

        cout << "Enter your 2D Elements: " << endl;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }

        cout << "Printed: " << endl;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~array(){ // Add a destructor to free the allocated memory
        for(i = 0; i < n; i++){
            delete[] a[i];
        }
        delete[] a;
    }
};

int main(){
    array obj;
    obj.arr();

    return 0;
}

