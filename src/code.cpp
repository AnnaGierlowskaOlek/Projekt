#include "code.hpp"
#include <sstream>
using namespace std;

int code(string str_wejsciowy) {

  int liczba;         // liczba wprowadzana przez użytkownika
  int odwrocona = 0;  // odwrócona liczba
  int tymczasowa;     // cyfra z dzielenia przez 10

  std::istringstream(str_wejsciowy) >> liczba;

  while (liczba != 0)
    {
      tymczasowa = liczba % 10;
      odwrocona = odwrocona * 10 + tymczasowa;

      liczba /= 10;
    }
  return odwrocona; 
}