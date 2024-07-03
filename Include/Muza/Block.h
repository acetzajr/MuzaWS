#pragma once

#include "Muza/Aliases.h"
#include "Muza/Constants.h"

struct BlockST;

typedef struct BlockST BlockZ;

struct BlockST {
  SampleT samplesM[CHANNELS_COUNT][BLOCK_FRAMES];
};
