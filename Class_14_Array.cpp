
#include <bits/stdc++.h>
using namespace std;

// 1st code
// simple array code
int main()
{
  int arr[5]; // data_type array_name[array size]
  arr[2] = 50;
  arr[4] = 20;
  arr[1] = arr[2] - arr[4];

  cout << arr[1];
  return 0;
} // 1st code end



// 2nd code
// array input and output using loop
int main()
{
  int ar[10];
  for (int i = 0; i < 5; i++)
  {
    cin >> ar[i]; // array i tomo position a input nea,
  }

  for (int i = 0; i < 5; i++)
  {
    cout << ar[i] << " "; // Output
  }
  return 0;
} // 2nd code end




// 3rd code
// count total even and odd number
int main()
{
  int size = 10;
  int ar[size] = {12, 15, 17, 14, 16, 19, 18, 20, 30, 50};

  int total_even = 0, total_odd = 0;
  for (int i = 0; i < size; i++)
  {
    if (ar[i] % 2 == 0) // ar[0] % 2 == 0 **  12 % 2 == 0
      total_even += 1;
    else
      total_odd += 1;
  }

  cout << "Total Even Number: " << total_even << endl;
  cout << "Total odd number: " << total_odd << endl;
  return 0;
} // 3rd code end




// 4th code
// find max/largest number in the array
int main()
{
  int size = 6; // {50, 70, 10 , 4, 10, 20}
  int ary[size];

  for (int i = 0; i < size; i++)
    cin >> ary[i]; // input in array

  int max = ary[0]; // max = 50
  for (int i = 1; i < size; i++)
  {
    if (ary[i] > max) // 50 > 70 if true, max = 70;
    {
      max = ary[i];
    }
  }
  cout << max;

  return 0;
} // 4th code end
