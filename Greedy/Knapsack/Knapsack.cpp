#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
double findMaxValue(double Weight, long arrSize, vector<pair<double, double>> valueList)
{
   double remainWeight = Weight;
   double totalValue = 0;
   while (remainWeight > 0)
   {
       pair<double, double> mostValue = valueList[--arrSize];
       if(mostValue.first > remainWeight)
       {
           totalValue += (remainWeight/mostValue.first) * mostValue.second;
           remainWeight = 0;
       }
       else
       {
           totalValue += mostValue.second;
           remainWeight -= mostValue.first;
       }
       valueList.pop_back();

   }
   return totalValue;
}
bool sortByDiv(pair<double,double> &firstElem, pair<double,double> &secondElem)
{
   return (firstElem.second/firstElem.first) < (secondElem.second/secondElem.first);
}
int main() {
   double totalWeight;
   long arrSize;
   cin >> totalWeight >> arrSize;
   vector<pair<double, double>> weight_value(arrSize);
   for(int i  = 0; i < arrSize; i++)
       cin >> weight_value[i].second;
   for(int i  = 0; i < arrSize; i++)
       cin >> weight_value[i].first;
   sort(weight_value.begin(), weight_value.end(), sortByDiv);
   cout << setprecision(2) << fixed <<findMaxValue(totalWeight,arrSize,weight_value) << endl;
   return 0;
}
