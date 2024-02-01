#include <bits/stdc++.h>
using namespace std;

// 1st code
// Global variable vs Local variable

int a = 20, b = 30; // decleare global variable
void add_two_num()
{
  cout << "Add two func output";
  cout << a << " " << b << endl;
}

int main()
{
  int c = 10; // Local variable
  add_two_num();
  cout << "\nMain func output ";
  cout << a << " "<< b;
  return 0;
} // 1st code END 




// 2nd code
// Area of circle area
int a = 20; // declare global variable
float PI()
{
  cout << a << endl; // print global variable
  return 3.1416;
}
float r_double(int r)
{
  cout << a << endl; // print global variable
  return r*r;
}
int main()
{
  float r;
  cin >> r;
  float ans = PI() * r_double(r); // 
  cout << ans << endl; // print area of circle

  cout << a << endl; // print global variable

  return 0;
} // 2nd code End



// 3rd code
// find Permutation using factorial function
 int factorial(int m)
{

  int ans = 1;
  for(int i = 1; i <= m; i++)
    ans *= i; // n! = 5*4*3*2*1 = 120

  return ans;
}
int main()
{
  int n, r;
  cin >> n >> r;

        //permutation sutro = n!/(n-r)!
  int ans_permutation = factorial(n) / factorial((n-r)); 
  cout << ans_permutation;
  return 0;
} // 3rd code End



// 4th code
// just solving
void fibonacci(int n)
{
  int num1 = 0, num2 = 1, temp = 0;
  cout << num1 << " ";
  cout << num2 << " ";
  for (int i = 0; i <= n; i++)
  {
    temp = num1 + num2;
    cout << temp << " "; // 0 1 1 2 3 5 8 13 21
    num1 = num2;
    num2 = temp;
  }
}

int main()
{
  int n;
  cin >> n;
  fibonacci(n);

  return 0;
} // 4th code end
