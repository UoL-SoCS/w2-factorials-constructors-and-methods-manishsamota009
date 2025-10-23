
#define CATCH_CONFIG_MAIN
#include <iostream>
using namespace std;

// factorial funcation
long calculateFactorial(int n) {
 
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers");
        return 0;  
    }

    long result = 1;  
// for loop from n = 1  to n
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}
