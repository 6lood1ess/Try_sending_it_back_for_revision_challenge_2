/*************************
 * Автор: Захаров Никита *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
  double tKelvins;
  double concentrationSi = 0.025; //Концентрация кремния
  double contentO; //Содержание кислорода
  
  cout << "Введите температуру стали в кельвинах: ";
  cin >> tKelvins;

  cout << "T = " << tKelvins << " K\n";
  cout << "Si (%)\tO (%)\n";
  
  //Рассчитываем степень отдельно для формулы нахождения содержания кислорода
  double exponent;
  exponent = (-31000.0 / tKelvins) + 12.152;
  
  while (concentrationSi < 0.1) {
    contentO = sqrt(pow(10.0, exponent) / concentrationSi);
    
    cout << concentrationSi << "\t" << contentO << endl;
    
    //Шаг концентрации кремения: 0.025
    concentrationSi = concentrationSi + 0.025;    
    }
    
  do {
    contentO = sqrt(pow(10.0, exponent) / concentrationSi);
    
    cout << concentrationSi << "\t" << contentO << endl;
    
    //Шаг концентрации кремния: 0.1
    concentrationSi = concentrationSi + 0.1; } while (concentrationSi < 0.71);
    
  return 0;
}