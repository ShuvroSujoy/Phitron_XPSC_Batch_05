#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   int flag = 0;
   for (int mask = 0; mask < (1 << n); mask++)
   {
      int sum = 0;
      for (int k = 0; k < n; k++)
      {
         if ((mask >> k) & 1)
         {
            sum += a[k];
         }
         else
         {
            sum -= a[k];
         }
      }

      if (sum % 360 == 0)
      {
         flag = 1;
         break;
      }
   }

   if (flag)
   {
      cout << "YES" << '\n';
   }
   else
   {
      cout << "NO" << '\n';
   }

   return 0;
}
