#include "Muza/Muza.h"

#include "Muza/Acetza.h"
#include "Muza/Aliases.h"

#include <math.h>

MuzaZ MuzaG = {.durationM = 1.0, .frequencyM = 360.0};

void InitF() { AcetzaG.rationsM[6] = sqrt(2.0); }

void NoteF(TimeT timeP) {}
