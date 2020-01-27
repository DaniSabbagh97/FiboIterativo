//Daniel Sabbagh Pastor Alumno TPA UEM.
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void fib(int num) {
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < num; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}
int main() {
    auto start = high_resolution_clock::now();
   int num;
   cout << "Enter the number : ";
   cin >> num;
   cout << "\nThe fibonacci series : " ;
   fib(num);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTiempo "<< duration.count()<< " microseconds" << endl;
   return 0;
}
//Checked
