#pragma once

#include "Muza/Aliases.h"

struct MuzaST;

typedef struct MuzaST MuzaZ;

struct MuzaST {
  DurationT durationM;
  FrequencyT frequencyM;
};

extern MuzaZ MuzaG;

void InitF();
void NoteF(TimeT timeP);
