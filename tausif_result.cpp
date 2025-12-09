#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    double result = 0.0;

    for (int i = 1; i <= n; ++i) {
        result += pow(i, 2);
    }

    cout << "The sum of squares from 1 to " << n << " is: " << result << endl;
    return 0;
}