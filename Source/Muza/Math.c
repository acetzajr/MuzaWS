#include "Muza/Math.h"

#include "Muza/Aliases.h"

i64T PModIF(i64T numberP, i64T modulusP) {
  return numberP < 0 ? (numberP % modulusP + modulusP) % modulusP
                     : numberP % modulusP;
}
