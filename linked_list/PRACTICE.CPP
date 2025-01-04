
#include <iostream>
#include <cmath>
using namespace std;

#define   f(x)   x*x -8
#define   g(x)   (8 + x*x)/(2*x)

int main() {
    int step = 1, N;
    float x0, x1, e;

    cout << "Enter initial guess: "<<endl;
    cin >> x0;

    cout << "Enter tolerable error: "<<endl;
	cin >> e;

    cout << "Enter maximum iteration: "<<endl;
    cin >> N;
    cout << "Fixed Point Iteration Method" << endl;
	cout<<" "<<endl;
    do {
        x1 = g(x0);
        cout << "Iteration-" << step << ": x1 = " << x1 << " and f(x1) = " << f(x1) << endl;

        step++;

        if (step > N) {
            cout << "Not Convergent.";
            return 0;
        }

        x0 = x1;

    } while (abs(f(x1)) > e);

    cout << endl << "Root is " << x1;

    return 0;
}

