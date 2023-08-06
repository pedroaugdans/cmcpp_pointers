#include <iostream>

int Add(int* a, int* b);    //Add two numbers and return the sum
void AddVal(int* a, int* b, int* result); //Add two numbers and return the sum through the third pointer argument
void Swap(int* a, int* b);  //Swap the value of two integers
void Factorial(int* a, int* result);       //Generate the factorial of a number and return that through the second pointer argument

void Factorial(int* a, int* result) {
    int i;
    int lim = *a;
    *result = *a;

    for (i = 0; i+1 < *a; ++i) {
        *result = (*result) * (lim - (i+1));
    }
}

int main() {
    int a{5}, b{0};
    Factorial(&a, &b);

    using namespace std;
    cout << "The result of the factorial of " << a << " is: " << b << endl;

    return 0;
}