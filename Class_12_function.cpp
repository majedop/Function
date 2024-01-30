// first code -> Prime number
#include <bits/stdc++.h>
using namespace std;

bool check_prime(int p)
{
  if (p == 1)
    return false;
  else if (p == 2)
    return true;

  for (int i = 2; i < p; i++)
  {
    if (p % i == 0)
      return false;
  }
  return true;
}
int main()
{
  int p, r;
  cin >> p >> r;

  bool is_prime = check_prime(p);
  if (is_prime == true)
    cout << p << " is a prime numeber" << endl;
  else
    cout << p << " is a not prime" << endl;

  return 0;
}

// 2nd code -> vowel or consonant

#include <bits/stdc++.h>
using namespace std;

bool check_vowel_or_consonant(char ch)
{
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    return true;

  return false;
}
int main()
{
  char ch;
  cin >> ch;

  if (check_vowel_or_consonant(ch) == true)
    cout << 30 + 20;
  else
    cout << 30 - 20;

  if (check_vowel_or_consonant(ch) == true)
    cout << 30 * 5;
  else
    cout << 30 / 5;

  return 0;
}
