#include <iostream>

int Add(int* a, int* b);    //Add two numbers and return the sum
void AddVal(int* a, int* b, int* result); //Add two numbers and return the sum through the third pointer argument
void Swap(int* a, int* b);  //Swap the value of two integers
void Factorial(int* a, int* result);       //Generate the factorial of a number and return that through the second pointer argument

void AddVal(int* a, int* b, int* result) {
    *result = *a + *b;
    return;
}

int Add(int* a, int* b) {
    return *a + *b;
}

void Swap(int* a, int* b) {
    int helper;
    helper = *a;
    *a = *b;
    *b = helper;

    return;
}

void Factorial(int* a, int* result) {
    int i;
    int lim{ *a };
    *result = *a;

    for (i = 0; i + 1 < *a; ++i) {
        *result = (*result) * (lim - (i + 1));
    }

    return;
}

/*Main notes -------------------------------------------------------------------------
--> Input not protected
--> Variables can be avoided by storing information on double pointers, but that would be pointless...
thereby defeating this whole excersise, because the point of the excercise is to get the pointer.
-----------------------*/

int main() {
    int a{ 5 }, b{ 0 }, c{ 0 }; // for the factorial testing
    int d{ 0 }, e{ 0 }; // for swap testing

    using namespace std;
    /*Addition testing ----------------------------------------------
    -----------------------*/
    cout << "Enter two numbers to calculate the addition: " << endl;
    cin >> a;
    cout << "Enter anoether one" << endl;
    cin >> b;
    AddVal(&a, &b, &c);
    cout << "your result is " << c << endl;


    /*Factorial testing ----------------------------------------------
    -----------------------*/
    cout << "Enter a number to calculate the factorial : " << endl;
    cin >> a;

    Factorial(&a, &b);
    cout << "The result of the factorial of " << a << " is: " << b << endl;


    /*swap testing ----------------------------------------------------
    -----------------------*/
    cout << "enter a two digit number to swap: " << endl;
    cin >> a;
    d = a / 10;
    e = a - d * 10;
    Swap(&d, &e);
    cout << "The result is: " << (d * 10 + e) << endl;

    return 0;
}