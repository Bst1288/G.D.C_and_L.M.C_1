#include <iostream>
using namespace std;

int gcd(int num1, int num2) {

    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        }
        else {
            num2 = num2 - num1;
        }
    }
    return num1;
}

int lcm(int num1, int num2){
	int m = num1;
	int n = num2;
	while(m != n){
		if(m < n){
			m = m + num1;
		}
		else{
			n = n + num2;
		}
	}
}

int main() {
    int num1, num2;
    cout << "Enter frist number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    cout << "G.C.D = " << gcd(num1, num2) << endl;
    cout << "L.C.M = " << lcm(num1, num2) << endl;
    return 0;
}
