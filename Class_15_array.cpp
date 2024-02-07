#include <bits/stdc++.h>
using namespace std;

// 1st code
// count vowel and conostant
int main()
{
  int n;
  cin >> n;
  char ar[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }

  int vowel = 0, cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i] == 'u')
    {
      vowel += 1;
    }
    else
    {
      cnt += 1;
    }
  }

  cout << "Vowel = " << vowel << "\n";
  cout << "Consonant = " << cnt << "\n";

  return 0;
}

// 2nd code
// Pesentation question no 4
int main()
{
  int n, q;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> q; //
  for (int i = 0; i < q; i++)
  {
    int index, value;
    cin >> index >> value; //(index = 0, value = 10), (index = 2, value = 5)
    a[index] += value;     // (a[0] += 10, 1 + 10 = 11), (a[2] += 5, 3+5 = 8 ),
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}
