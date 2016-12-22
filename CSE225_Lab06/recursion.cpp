#include <iostream>
#include <math.h>
using namespace std;

int fib(int n);
int factorial(int n);
int sumOfDigits(int x);
int findMin(int a[], int size);
int DecToBin(int dec);
double sumSeries(int n);

int main(){

    /*int num;
    cin >> num;*/

    /*//Problem 01
    cout << num << "th fibonacci number is ";
    cout << fib(num - 1) << endl;*/

    /*//Problem 02
    cout << num << "! = " << factorial(num) << endl;*/

    /*//Problem 03
    cout << "sum of the digits of " << num << " is "<< sumOfDigits(num) << endl;*/

    //Problem 04
    int a[5] = {5,1,7,0,3};
    cout << findMin(a, 5) << endl;

    /*//Problem 05
    DecToBin(num);*/

    /*//Problem 06
    cout << sumSeries(num) << endl;*/

    return 0;
}

int fib(int n){

    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int factorial(int n){
    if(n == 0)
        return 1;
    else if(n == 1)
        return 1;
    else
        return (n * factorial(n-1));
}

int sumOfDigits(int x){
    int rem;

    if(x == 0)
        return 0;
    else{
        rem = x % 10;
        x = x / 10;
        return rem + sumOfDigits(x);
    }
}

/*int findMin(int a[], int size){
    int x = a[size - 1];

    if(size == 1)
        return x;
    else{
        if(a[size - 2] > x)
            a[size - 2] = x;
        return findMin(a, size--);
    }
}*/

int findMin(int a[], int size){
    int min;

    if(size == 1)
        return a[0];
    else{
        min = findMin(a, size - 1);

        if(min < a[size-1])
            return min;
        else
            return a[size-1];
    }
}

int DecToBin(int dec){
    int rem;

    /*if(dec == 0)
        return 0;*/
    if(dec == 0);
    else{
        rem = dec % 2;
        dec = dec / 2;

        DecToBin(dec);
        cout << rem;
    }
}

double sumSeries(int n){
    if(n == 0)
        return 1;
    else
        return (1.0/pow(2, n) + sumSeries(n-1));
}
