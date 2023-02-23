#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2, i, j, k;
    int A[r1][c1], B[r2][c2], C[r1][c2]; // Declaration of Dynamic Array 

    cout << "Enter Rows & Columns for First Matrix: ";
    cin >> r1 >> c1;
    cout << "Enter Rows & Columns for Second Matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout<<"Matrix Dimensions cannot be Multiplied\n";
        exit (0);
    }

    // Storing Elements of Matrix A
    cout << "\nEnter Elements of Matrix 1:\n";
  
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Storing Elements of Matrix B
    cout << endl << "Enter Elements of Matrix 2:" << endl;
 
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
     }
        
	// Multiplying Matrix A and B and Storing in Matrix C
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            C[i][j]=0;
            
            for(k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }

    // Displaying the Multiplication of Matrix A & Matrix B
    cout << endl << "Output Matrix: " << endl;
        
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++) {
            cout << " " << C[i][j];
            
        	if(j == c2-1) {
        	  cout << endl;
          }
        }

    return 0;
}
