#include <iostream>
using namespace std;

int main()
{

    // The memory is allocated in stack
    int arr[10] = {};
    // Id we define the size of array at run time,
    // The size may overflow the stack and crash the program/process

    char *ch = new char();
    cout << "Size of char : " << sizeof(ch) << "\nSize of *char : " << sizeof(*ch) << endl;

    int sizeOfArray;
    cin >> sizeOfArray;
    int *d_array = new int[sizeOfArray];
    cout << "Size of d_array : " << sizeof(d_array) << "\nSize of *d_array : " << sizeof(*d_array) << endl;

    delete[] d_array;
    delete ch;

    // Dynamic 2d array of 4x5
    int **ar = new int *[4];
    for (int i = 0; i < 4; i++)
        ar[i] = new int[5];

    // Taking input
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            cin >> ar[i][j];

    for (int i = 0; i < 4; i++)
        delete[] ar[i];
    delete[] ar;
}
