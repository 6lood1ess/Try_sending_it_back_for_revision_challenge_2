/*************************
 * Автор: Захаров Никита *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
  const double T = 1873.0;

  // Массив концентраций кремния [Si] в процентах
  double Si_values[] = {0.025, 0.05, 0.075, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7};

  cout << "T = " << T << " K\n";
  cout << "Si (%)\tO (%)\n";

  for (int i = 0; i < 10; ++i) {      
    double Si = Si_values[i];
    
    double exponent = (-31000.0 / T) + 12.152;
    
    double O = sqrt( pow(10.0, exponent) / Si );
    
    cout << Si << "\t" << O << endl;    
    }

  return 0;
}