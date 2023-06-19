#include <iostream>
#include <vector>
using namespace std;
int findMinNumberOfCoins(vector<long> coins, int numberOfCoins, long money)
{
   vector<int> dpTable(money + 1);
   fill(dpTable.begin(), dpTable.end(), -1);
   dpTable[0] = 0;
   for(long mon = 1; mon <= money; mon++)
       for (int idx = 0; idx < numberOfCoins; idx++)
       {
           if (mon >= coins[idx] &&
               (dpTable[mon-coins[idx]] != -1 &&
                   (dpTable[mon] == -1 || dpTable[mon] > dpTable[mon - coins[idx]] + 1)))
               dpTable[mon] = dpTable[mon - coins[idx]] + 1;
       }
   return dpTable[money];

}
int main() {
   int numberOfCoins;
   cin >> numberOfCoins;
   long money;
   cin >> money;
   vector<long> coins (numberOfCoins);
   for(int i = 0; i < numberOfCoins; i++)
       cin >> coins[i];
   cout << findMinNumberOfCoins(coins, numberOfCoins, money) << endl;
}
