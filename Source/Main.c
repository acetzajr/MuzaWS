#include "Muza/Acetza.h"
#include "Muza/Muza.h"

#include <stdio.h>

int main() {
  printf("Muza\n");
  InitF();
  MuzaG.durationM = 1.0;
  MuzaG.frequencyM = AcetzaF(0);
  NoteF(0.0);
}
