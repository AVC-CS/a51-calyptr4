// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0; // Input integer 'n' from directions
  double result = 1.0; // Initialize result as per directions

  cout << "Enter the integer n: ";
  cin >> n;

  // If n >= 0: loop n times, multiply result by 2 each iteration
  if (n >= 0) {
    for (int i = 0; i < n; ++i) {
      result *= 2;
    }
  }
  // If n < 0: loop |n| times, divide result by 2 each iteration
  else {
    int abs_n = abs(n);
    for (int i = 0; i < abs_n; ++i) {
      result /= 2;
    }
  }

  // Print result with 5 decimal places
  cout << fixed << setprecision(5) << result << endl;

  return 0;
}
