#include <bits/stdc++.h>
using namespace std;

/*
1. Square
* row == column
2. Diagonal Matrix
*must be Square
*must be 0 , without (0, 0) (1,1) (2,2) .....

3.Scalar Matrix
*must be Square
*must be Diagonal
*must be Scalar -> 4 - 4 - 4
 */
// 1st Code

/*  
3 3
4 0 0
0 4 0
0 0 4

Output: Scalar
*/
int main()
{
  int row, clm;
  cin >> row >> clm;
  int ar[row][clm];

  for (int r = 0; r < row; r++)
  {
    for (int c = 0; c < clm; c++)
      cin >> ar[r][c];
  }

  if (row == clm) // check Square matrix
  {
    bool found = true;
    for (int r = 0; r < row; r++)
    {
      int x = ar[0][0];
      for (int c = 0; c < clm; c++)
      {
        if (r == c) // check row == clm , this is a corno
        {
          if (ar[r][c] != x) // not scalar
          {
            found = false;
          }
          continue;
        }

        if (ar[r][c] != 0) // check diagonal
        {
          found = false;
          break;
        }
      }
    }

    if (found == true)
      cout << "Scalar" << endl;
    else
      cout << "Not Scalar" << endl;
  }
  else
  {
    cout << "Not Scalar" << endl;
  }

  return 0;
} // end



// 2nd code
// 2 matrix addition
/*
2 3
1 2 3
4 5 6

7 8 9
10 11 12

Output:
8 10 12
14 16 18
 */
int main()
{
  int row, clm;
  cin >> row >> clm;
  int mtx1[row + 1][clm + 1], mtx2[row + 1][clm + 1]; // mtrx1[4][3]

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= clm; j++)
      cin >> mtx1[i][j]; // input matrix one
  }

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= clm; j++)
      cin >> mtx2[i][j]; // input 2nd matrix
  }

  int ans[row + 1][clm + 1]; // ans[3][4];
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= clm; j++)
    {
      ans[i][j] = mtx1[i][j] + mtx2[i][j]; // mtrx[1][1] + mtrx[1][1]
    }
    cout << "\n";
  }

  cout << "\n";
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= clm; j++)
    {
      cout << mtx1[i][j] << " "; // print All sum
    }
    cout << "\n";
  }
}
