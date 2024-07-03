#include "Muza/Acetza.h"
#include "Muza/Aliases.h"
#include "Muza/Math.h"

#include <math.h>

AcetzaZ AcetzaG = {
    .baseM = 360.0,
    .rationsM = {(FrequencyT)1 / 1, (FrequencyT)256 / 243, (FrequencyT)9 / 8,
                 (FrequencyT)32 / 27, (FrequencyT)81 / 64, (FrequencyT)4 / 3, 0,
                 (FrequencyT)3 / 2, (FrequencyT)128 / 81, (FrequencyT)27 / 16,
                 (FrequencyT)16 / 9, (FrequencyT)243 / 128}};

FrequencyT AcetzaPowerF(NoteT noteP) {
  return pow(2.0, noteP < 0 ? ((f64T)noteP + 1.0) / ACETZA_NOTES - 1.0
                            : (f64T)noteP / ACETZA_NOTES);
}

FrequencyT AcetzaRationF(NoteT noteP) {
  return AcetzaG.rationsM[PModIF(noteP, ACETZA_NOTES)];
}

FrequencyT AcetzaF(NoteT noteP) {
  return AcetzaG.baseM * AcetzaRationF(noteP) * AcetzaPowerF(noteP);
}
