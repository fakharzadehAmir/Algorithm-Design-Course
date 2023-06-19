#include <iostream>
#include <vector>
using namespace std;
bool checkMixOf2String(string s1, string s2, string s3)
{
   unsigned long string1_size = s1.size(), string2_size = s2.size(), string3_size = s3.size();

   if(string1_size + string2_size != string3_size)
       return false;

   vector<vector<bool>> dpTable(string1_size + 1);

   for(unsigned long idx = 0; idx <= string1_size; idx++)
       dpTable[idx] = vector<bool> (string2_size+1);

   for(unsigned long idx1 = 0; idx1 <= string1_size; idx1++)
       for (unsigned long idx2 = 0; idx2 <= string2_size; idx2++)
       {
           if(idx1 == 0 && idx2 == 0)
               dpTable[idx1][idx2] = true;

           else if(idx1 == 0)
               dpTable[idx1][idx2] = s2[idx2 - 1] == s3[idx2 - 1] && dpTable[idx1][idx2 - 1];

           else if(idx2 == 0)
               dpTable[idx1][idx2] = s1[idx1-1] == s3[idx1 - 1] && dpTable[idx1-1][idx2];

           else
           {
               if (s1[idx1 - 1] == s3[idx1 + idx2 - 1] && s2[idx2 - 1] != s3[idx1 + idx2 - 1])
                   dpTable[idx1][idx2] = dpTable[idx1 - 1][idx2];

               else if (s1[idx1 - 1] != s3[idx1 + idx2 - 1] && s2[idx2 - 1] == s3[idx1 + idx2 - 1])
                   dpTable[idx1][idx2] = dpTable[idx1][idx2 - 1];

               else if (s1[idx1 - 1] == s3[idx1 + idx2 - 1] && s2[idx2 - 1] == s3[idx1 + idx2 - 1])
                   dpTable[idx1][idx2] = dpTable[idx1 - 1][idx2] || dpTable[idx1][idx2 - 1];
           }
       }
   return dpTable[string1_size][string2_size];
}
int main()
{
   string s1, s2, s3;
   cin >> s1;
   cin >> s2;
   cin >> s3;
   if(checkMixOf2String(s1, s2, s3))
       cout << "True" << endl;
   else
       cout << "False" << endl;
   return 0;
}