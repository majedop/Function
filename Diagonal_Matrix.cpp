#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row, clm;
  cin >> row >> clm;
  int ar[row + 1][clm + 1];

  for (int r = 1; r <= row; r++)
  {
    for (int c = 1; c <= clm; c++)
      cin >> ar[r][c];
  }

  // check

  if (row == clm)
  {
    bool found = true;
    for (int r = 1; r <= row; r++)
    {
      for (int c = 1; c <= clm; c++)
      {
        if (r == c)
          continue;
        
        if (ar[r][c] != 0)
        {
          found = false;
          break;
        }
      }
    }
    if (found)
      cout << "2nd Diagonal" << endl;
    else
      cout << "Not 2nd diagonal" << endl;
  }
  else
  {
    cout << "Not diagonal" << endl;
  }
}
