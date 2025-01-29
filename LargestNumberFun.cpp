#include <iostream>
using namespace std;
int findLargest(int num1, int num2, int num3) {
    int largest = num1; 
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;
    return largest;
}
int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int largest = findLargest(num1, num2, num3);
    cout << "The largest number is " << largest << "." << endl;
    return 0;
}