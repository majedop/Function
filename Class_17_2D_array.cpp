#include <bits/stdc++.h>
using namespace std;

int main()
{
  int ar[3][3]; // 3*3 = 9 , total slots = 9
  /* 
  // input in 1st row
  ar[0][0] = 10;
  ar[0][1] = 20;
  ar[0][2] = 30;
  // input in 2nd row
  ar[1][0] = 40;
  ar[1][1] = 50;
  ar[1][2] = 60;
  // input in 3rd row
  ar[2][0] = 70;
  ar[2][1] = 80;
  ar[2][2] = 90;
  */

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      // ar[i=row][j=column]
      cin >> ar[i][j]; // input in 2D array
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {                          // ar[0][1]
      cout << ar[i][j] << " "; // output in 2D array
    }
    cout << "\n";
  }

  return 0;
}
