#pragma once

#include "Muza/Aliases.h"

#define ACETZA_NOTES 12

struct AcetzaST;

typedef struct AcetzaST AcetzaZ;

struct AcetzaST {
  RationT rationsM[ACETZA_NOTES];
  FrequencyT baseM;
};

extern AcetzaZ AcetzaG;

FrequencyT AcetzaF(NoteT noteP);
