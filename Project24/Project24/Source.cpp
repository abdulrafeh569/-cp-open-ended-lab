#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "Prime Number Checker Menu:" << endl;
        cout << "1. Find prime numbers in a given range" << endl;
        cout << "2. Check if a specific number is prime" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        if (choice == 1) {
            int sn, en;
            cout << "Enter the starting number of the range: ";
            cin >> sn;
            cout << "Enter the ending number of the range: ";
            cin >> en;
            if (sn <= en) {
                cout << "Prime numbers in the range " << sn << " to " << en << " are: ";
                for (int number = sn; number <= en; ++number) {
                    if (number <= 1)
                        continue;

                    bool isPrime = true;
                    for (int i = 2; i * i <= number; ++i) {
                        if (number % i == 0) {
                            isPrime = false;
                            break;
                        }
                    }

                    if (isPrime) {
                        cout << number << " ";
                    }
                }
                cout << endl;
            }
            else {
                cout << "Invalid range. Start should be less than or equal to end." << endl;
            }
        }
        else if (choice == 2) {
            int num;
            cout << "Enter a number to check if it's prime: ";
            cin >> num;
            if (num <= 1) {
                cout << num << " is not a prime number." << endl;
            }
            else {
                bool isPrime = true;
                for (int i = 2; i * i <= num; ++i) {
                    if (num % i == 0) {
                        isPrime = false;
                        break;
                    }
                }

                if (isPrime) {
                    cout << num << " is a prime number." << endl;
                }
                else {
                    cout << num << " is not a prime number." << endl;
                }
            }
        }
        else if (choice == 3) {
            cout << "Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please enter a valid option (1, 2, or 3)." << endl;
        }
    }
    return 0;
}
