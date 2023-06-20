#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
long findMinTime(priority_queue<long> pqMeals, long forget_time)
{
   long prev, after = 0;
   while (!pqMeals.empty())
   {
       prev = after;
       vector<long> newElems;
       for(long i = 0; !pqMeals.empty() && i < forget_time + 1; i++)
       {
           long newElem = pqMeals.top() - 1;
           pqMeals.pop();
           after++;
           if(newElem > 0)
               newElems.push_back(newElem);
       }
       for(auto elem: newElems)
           pqMeals.push(elem);
       if (pqMeals.empty())
           return after;
       if( after - prev <= forget_time)
           after += forget_time - (after - prev - 1);

   }
   return after;
}
int main() {
   long forget_time, numberOfPerson, element;
   cin >> forget_time >> numberOfPerson;
   priority_queue<long> pq_mealsPerson;
   for(long i = 0; i < numberOfPerson; i++) {
       cin >> element;
       pq_mealsPerson.push(element);
   }
   cout << findMinTime(pq_mealsPerson, forget_time) << endl;
   return 0;
}
