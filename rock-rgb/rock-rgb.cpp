#include <iostream>
using namespace std;
const char RGB[3] = {'R', 'G', 'B'};

int main() {
   int in;
   do {
      // get rock amunt input
      printf("Please enter rock amount: ");
      scanf("%d", &in);
      
      // declare variable before use
      char rocks[in];
      int dualRocks;

      // loop to assign value to rocks array
      cout << dualRocks;
      for(int i = 0; i < in; i++) {
         int idx = (rand() % 3);
         rocks[i] = RGB[idx];
         if (i > 0 && rocks[i] == rocks[i -1]) {
            dualRocks++;
         }
      }
      printf("Rocks result: %s\n", rocks);
      printf("Rocks duo: %d\n", dualRocks);
      dualRocks = 0;
   } while (true);
   return 0;
}