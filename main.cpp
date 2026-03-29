#include "functions.h"


int main() {
    int n;
    cout <<"Enter a number:";
    cin >> n;
    int sum = sumOfSquares(n);
    cout << "Sum of squares:"<< sum << endl;

    
    cout << "Enter a number:";
    cin >> n;
    cout <<"Factorial of the number is: " << findFactorial(n);
    return 0;
   
}