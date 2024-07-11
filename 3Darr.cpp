#include <iostream>
using namespace std;

const int X = 2; // Size of the first dimension
const int Y = 3; // Size of the second dimension
const int Z = 4; // Size of the third dimension

int main() {
    // Declare a 3D array
    int threeDArray[X][Y][Z];

    // Initialize the 3D array with values
    for (int x = 1; x <=X; ++x) {
        for (int y = 1; y <= Y; ++y) {
            for (int z = 1; z <= Z; ++z) {
                threeDArray[x][y][z] = x * Y * Z + y * Z + z;
            }
        }
    }

    // Access and print the values in the 3D array
    for (int x = 1; x <= X; ++x) {
        for (int y = 1; y <= Y; ++y) {
            for (int z = 1; z <= Z; ++z) {
                cout << "threeDArray[" << x << "][" << y << "][" << z << "] = " << threeDArray[x][y][z] << endl;
            }
        }
    }

    return 0;
}

