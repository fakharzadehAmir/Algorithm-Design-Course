#include <iostream>
#include <vector>
using namespace std;
int main() {
   unsigned long number;
   cin >> number;
   vector<unsigned long long> remainFib(number + 1);
   remainFib[0] = 0;
   remainFib[1] = 1;
   for(unsigned long i = 2 ; i < number + 1; i++)
       remainFib[i] = (remainFib[i - 2] + remainFib[i - 1]) % 1000000007;
   cout << remainFib[number] << endl;
   return 0;
}
