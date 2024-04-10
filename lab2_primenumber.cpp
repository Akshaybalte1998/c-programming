#include<iostream>
using namespace std;

int main()
{
    int upto;

    cout << "Enter a number up to which prime numbers should be printed: ";
    cin >> upto;

    cout << "Prime numbers up to " << upto << " are:" << endl;

    for (int num = 2; num <= upto; num++) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}




























