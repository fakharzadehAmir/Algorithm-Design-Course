#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
unsigned long findMinFantasy(string word)
{
   long word_size = word.size();
   vector<unsigned long> dpTable(word_size + 1);
   vector<unsigned long> dpTable_lower(word_size + 1);
//    convert to lowerCase from end to begin(dpTable for number of lowercase conversion)
   for(signed long idx = word_size - 1; idx >= 0; idx--) {
       dpTable_lower[idx] = dpTable_lower[idx + 1];
       if(isupper(word[idx]))
           dpTable_lower[idx]++;
   }
//    convert to upperCase from begin to end(dpTable initial with number of uppercase conversion)
   for(unsigned long idx = 1; idx <= word_size; idx++) {
       dpTable[idx] = dpTable[idx - 1];
       if(islower(word[idx - 1]))
           dpTable[idx]++;
   }
//    sum of number of uppercase and lowercase conversion and find minimum element in dpTable
   for(unsigned long index = 0; index < word_size + 1; index++)
       dpTable[index]  += dpTable_lower[index];
   return *min_element(dpTable.begin(), dpTable.end());
}
int main()
{
   string word;
   cin >> word;
   cout << findMinFantasy(word) << endl;
};